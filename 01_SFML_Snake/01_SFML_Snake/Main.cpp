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

//Prototypes
void print_map(int tab[MAX_X][MAX_Y]);

enum Case
{
	Empty = 0,
	Head = 1,
	Piece = 2,
	Apple = 3
};

int main()
{
	//Init VARIABLE
	int map[MAX_X][MAX_Y] = { {Case::Empty} };

	//Init Snake
	map[5][1] = Case::Head;
	map[4][1] = Case::Piece;
	map[3][1] = Case::Piece;

	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		/*sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyReleased)
			{
				if (event.key.code == sf::Keyboard::Escape)
					window.close();
			}
		}

		window.clear(sf::Color::Black);
		//window.draw(shape);
		window.display();*/

		print_map(map);
		system("cls");
	}

	return 0;
}

void print_map(int tab[MAX_X][MAX_Y]) {
	for (int i = 0; i < MAX_X; i++)
	{
		for (int j = 0; j < MAX_Y; j++) 
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
}