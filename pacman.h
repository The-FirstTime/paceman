#pragma once
#include <SFML/Graphics.hpp>

// Направление движения (не движется, вверх, вниз, влево, вправо)
enum struct Direction
{
    NONE,
    UP,
    DOWN,
    LEFT,
    RIGHT
};

// Структура описывает пакмана
// Пакмана можно смоделировать фигурой и направлением движения.
struct Pacman
{
    sf::CircleShape shape;
    Direction direction;
};

void initializePackman(Pacman& pacman);
void updatePackman(Pacman& pacman, float elapsedTime);
bool handlePackmanKeyPress(const sf::Event::KeyEvent& event, Pacman& pacman);
bool handlePackmanKeyRelease(const sf::Event::KeyEvent& event, Pacman& pacman);