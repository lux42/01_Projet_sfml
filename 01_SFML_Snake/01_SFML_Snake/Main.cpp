// Version 1.0
// Créateur: - Gaëtan Sprunger
//			 - Lucas Neuahus
//
// Création du projet
// Date : 24/11/2016

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

//Constantes
int const MAX_X(10);
int const MAX_Y(20);

//Enum
enum Case
{
	Empty = 0,
	Head = 1,
	Piece = 2,
	Apple = 3
};
enum Direction
{
	UP = 1,
	DOWN = 2,
	LEFT = 3,
	RIGHT = 4,
	LAST
};

#include "Main.h"
#include "Snake.h"

int main()
{
	//Variables
	srand((int) time(NULL));
	int plateau[MAX_X][MAX_Y] = { {Case::Empty} };
	Direction mainDirection = static_cast<Direction>(rand() % LAST);
	int lenghtSnake = 1;
	int X = rand() % (MAX_X + 1);
	int Y = rand() % (MAX_Y + 1);
	int XApple = rand() % MAX_X;
	int YApple = rand() % MAX_Y;

	plateau[X][Y] = Case::Head;
	plateau[XApple][YApple] = Case::Apple;

	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	sf::Clock mainClock;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyReleased)
			{
				if (event.key.code == sf::Keyboard::Escape)
					window.close();

				switch (event.key.code)
				{
					case sf::Keyboard::Up:
						mainDirection = Direction::UP;
						break;
					case sf::Keyboard::Down:
						mainDirection = Direction::DOWN;
						break;
					case sf::Keyboard::Left:
						mainDirection = Direction::LEFT;
						break;
					case sf::Keyboard::Right:
						mainDirection = Direction::RIGHT;
						break;
					default:
						break;
				}
			}
		}

		window.clear(sf::Color::Black);
		//window.draw(shape);
		window.display();

		sf::Time timeElapsed = mainClock.getElapsedTime();
		if (timeElapsed.asSeconds() > 1.0f) {
			plateau[X][Y] = Case::Empty;
			move_snake(&X, &Y, mainDirection);
			cout << X << " / " << Y << endl;
			plateau[X][Y] = Case::Head;
			print_map(plateau);
			mainClock.restart();
		}
	}

	return 0;
}