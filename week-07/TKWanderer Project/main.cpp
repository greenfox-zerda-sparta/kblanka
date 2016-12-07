#include <iostream>
#include "game-engine.hpp"

using namespace std;

class MyGame : public Game {
public:
  MyGame() {}
  virtual void init(GameContext& context) {
    context.load_file("floor.bmp");
    context.load_file("wall.bmp");
    context.load_file("hero-down.bmp");
  }
  virtual void render(GameContext& context) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        context.draw_sprite("floor.bmp", i * 72, j * 72);
        //context.draw_sprite("wall.bmp", i * 72, j * 72);
      }
    }
    context.draw_sprite("hero-down.bmp", 0, 0);
    context.render();
  }
};

int main(int argc, char* argv[]) {
  MyGame game;
  GameEngine engine(&game, 720, 720);
  engine.run();
  return 0;
}
