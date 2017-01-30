#include <cstdlib>
#include <iostream>
#include <fstream>
#include "MyGame.h"

MyGame::MyGame() {
  map = new Map;
  hero = new Hero(map);
  box_counter = 3;
  for (int i = 0; i < 3; i++) {
    box.push_back(new Box(map));
  }
  press_counter = 0;
}

// Loading the pictures
void MyGame::init(GameContext& context) {
  context.load_file("img/block_05.bmp");
  context.load_file("img/ground_04.bmp");
  context.load_file("img/ground_05.bmp");
  context.load_file("img/player_06.bmp");
  context.load_file("img/player_10.bmp");
  context.load_file("img/player_19.bmp");
  context.load_file("img/player_22.bmp");
  context.load_file("img/crate_27.bmp");
  context.load_file("img/crate_28.bmp");
}

void MyGame::render(GameContext& context) {
  // Loading the Map
  for (unsigned int row = 0; row < map->get_tileMap().size(); row++) {
    for (unsigned int col = 0; col < map->get_tileMap()[row].size(); col++)
      if (map->get_tileMap()[row][col] == 0) {
        context.draw_sprite("img/ground_04.bmp", col * 72, row * 72);
      } else {
        context.draw_sprite("img/ground_05.bmp", col * 72, row * 72);
      }
  }

  // Boxes randomly moving after two click
 for (int i = 0; i < 3; i++) {
    context.draw_sprite("img/crate_28.bmp", box[i]->get_loc_y() * 72, box[i]->get_loc_x() * 72);
    if (press_counter == 2) {
      for (int i = 0; i < box_counter; i++) {
        box[i]->random_move();
      }
      press_counter = 0;
    }
  }
 
  // Loading the Hero
  context.draw_sprite(hero->get_hero_image(), hero->get_loc_y() * 72, hero->get_loc_x() * 72);

  // Moving the Hero
  if (context.was_key_pressed(ARROW_DOWN)) {
    hero->set_hero_loc(hero->get_loc_x() + 1, hero->get_loc_y());
    hero->set_hero_image("img/player_06.bmp");
    press_counter++;
  }
  if (context.was_key_pressed(ARROW_UP)) {
    hero->set_hero_loc(hero->get_loc_x() - 1, hero->get_loc_y());
    hero->set_hero_image("img/player_10.bmp");
    press_counter++;
  }
  if (context.was_key_pressed(ARROW_RIGHT)) {
    hero->set_hero_loc(hero->get_loc_x(), hero->get_loc_y() + 1);
    hero->set_hero_image("img/player_19.bmp");
    press_counter++;
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    hero->set_hero_loc(hero->get_loc_x(), hero->get_loc_y() - 1);
    hero->set_hero_image("img/player_22.bmp");
    press_counter++;
  }
  context.render();
}

MyGame::~MyGame() {
  delete hero;
  delete map;
  for (int i = 0; i < 3; i++) {
    delete box[i];
  }
}
