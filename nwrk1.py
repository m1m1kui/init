import arcade
import random
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600


def create_cloud(x, y):
    arcade.draw_circle_filled(
        center_x=x,
        center_y=y,
        color=(random.randint(180, 255),random.randint(180,255),random.randint(180,255)),
        radius=60
    )

class Game(arcade.Window):
    def __init__(self):
        super().__init__(
            width=SCREEN_WIDTH,
            height=SCREEN_HEIGHT,
            title='Рисование фигур')
        self.background_color = (255, 255, 255)

    def on_draw(self):
        self.clear()
        for i in range(1, 4):
            create_cloud(100 * i, 400)
        for j in range(1,3):
            create_cloud(100 * j + 50, 470)


if __name__ == '__main__':
    game = Game()
    arcade.run()