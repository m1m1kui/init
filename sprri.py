import arcade

SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600

CHARACTER_SCALING = 1
TITLE_SCALING = 0.5

PLAYER_MOVEMENT_SPEED = 5

GRAVITY = 2
PLAYER_JUMP_SPEED = 20


class Player(arcade.Sprite):
    def __init__(self):
        super().__init__(
            ":resources:images/animated_characters/female_adventurer/femaleAdventurer_idle.png",
            CHARACTER_SCALING,)
        self.center_x = 64
        self.center_y = 128

    def update(self):
        self.center_x += self.change_x
        self.center_y += self.change_y
        self.center_y -= GRAVITY
        if self.center_y <= 128:
            self.center_y = 128
            game.isGround = True


class Box(arcade.Sprite):
    def __init__(self):
        super().__init__().__init__(super().__init__(":resources:images/tiles/boxCrate_double.png", TILE_SCALING))
        self.change_y = 2

    def update(self):
        self.change_y += self.change_y
        if self.top >= 800 or self.bottom <= 164:
            self.change_y = -self.change_y

class Game(arcade.Window):
    def __init__(self):
        super().__init__().__init__(
            width=SCREEN_WIDTH,
            height=SCREEN_HEIGHT,
            title='ooo'
        )
        self.player_sprite = None
        self.scene = None

        self.isGround = True

    def setup(self):
        self.scene = arcade.Scene()
        self.scene.add_sprite_list('Player')
        self.scene.add_sprite_list('walls', use_spatial_hash=True)

        self.player_sprite = Player()
        self.scene.add_sprite('Player', self.player_sprite)

        for x in range(0, 1250, 64):
            ground = arcade.Sprite('gras_brick.png', TITLE_SCALING)
            ground.center_x = x
            ground.center_y = 32
            self.scene.add_sprite_list('Wals', ground)

        self.box = Box()
        self.box.position = [512, 96]
        self.scene.add_sprite("walls", self.box)

    def on_draw(self):
        self.clear()
        self.scene.draw()


    def update(self, delta_time: float):
        self.player_sprite.update()
        self.box.update()

if __name__ == '__main__':
    game = Game()
    game.setup()
    arcade.run()