import time

import arcade

SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600

CHARACTER_SCALING = 1
TILE_SCALING = 0.5

PLAYER_MOVEMENT_SPEED = 5

GRAVITY = 2
PLAYER_JUMP_SPEED = 20


class Player(arcade.Sprite):
    def __init__(self):
        super().__init__(
            ":resources:images/animated_characters/zombie/zombie_idle.png",
            CHARACTER_SCALING,
        )
        self.center_x = 64
        self.center_y = 128

    def update(self):
        self.center_x += self.change_x
        self.center_y += self.change_y
        self.center_y -= GRAVITY
        if self.center_y <= 128:
            self.center_y = 128
            game.isGround = True


class Game(arcade.Window):
    def __init__(self):
        super().__init__(
            width=SCREEN_WIDTH,
            height=SCREEN_HEIGHT,
            title="коллизия",
        )
        self.player_sprite = None
        self.scene = None

        self.isGround = True
        self.cris = None

    def setup(self):
        self.scene = arcade.Scene()
        self.scene.add_sprite_list("Player")
        self.scene.add_sprite_list("Walls", use_spatial_hash=True)

        self.player_sprite = Player()
        self.scene.add_sprite("Player", self.player_sprite)

        self.cris_list = arcade.SpriteList()
        self.cris = arcade.Sprite(":resources:images/items/gemBlue.png", 0.3)
        self.cris.center_x = 300
        self.cris.center_y = 400
        self.cris_list.append(self.cris)

        self.cris_list(self.cris_list, collision_type="cris")

        def cris_hit_handler(player, enemy, _arbiter, _space, _data):
            self.game = False

        for x in range(0, 1250, 64):
            ground = arcade.Sprite(":resources:images/tiles/sandMid.png", TILE_SCALING)
            ground.center_x = x
            ground.center_y = 32
            self.scene.add_sprite("Walls", ground)

        # coordinate_list = [[512, 96], [256, 96], [768, 96]]

    def on_draw(self):
        self.clear()
        self.scene.draw()

    def on_key_press(self, key, modifiers):
        if self.isGround:
            if key == arcade.key.UP or key == arcade.key.W:
                self.player_sprite.change_y = PLAYER_JUMP_SPEED
                self.isGround = False
        if key == arcade.key.LEFT or key == arcade.key.A:
            self.player_sprite.change_x = -PLAYER_MOVEMENT_SPEED
        elif key == arcade.key.RIGHT or key == arcade.key.D:
            self.player_sprite.change_x = PLAYER_MOVEMENT_SPEED

    def on_key_release(self, key, modifiers):
        if key == arcade.key.LEFT or key == arcade.key.A:
            self.player_sprite.change_x = 0
        elif key == arcade.key.RIGHT or key == arcade.key.D:
            self.player_sprite.change_x = 0
        elif key == arcade.key.W or key == arcade.key.UP:
            self.player_sprite.change_y = 0

    def update(self, delta_time: float):
        self.player_sprite.update()


if __name__ == "__main__":
    game = Game()
    game.setup()
    arcade.run()