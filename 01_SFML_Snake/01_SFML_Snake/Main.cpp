// Version 1.0
// Créateur: - Gaëtan Sprunger
//			 - Lucas Neuahus
//
// Création du projet
// Date : 24/11/2016

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include "fonctions_snake.h"
//#include <Text.hpp>

using namespace std;
string culoare;

struct Game
{
	int pos[20][20];			// 0 - 19
	char nom[20];
}snake;

//cout << "1" << endl;


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	
	sf::Font font;

	if (!font.loadFromFile("Titillium-Light.ttf"))
	{
		// handle error
	}

	sf::Text text;
	text.setFont(font);
	text.setString("Bonjour");
	text.setColor(sf::Color::White);
	text.setCharacterSize(40);
		

	strcpy_s(snake.nom, "Lux");

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		
			if(event.type == sf::Keyboard::A)	
				cout << "Nom : " << snake.nom << endl;
		}


			window.clear(sf::Color::Black);
			window.draw(text);
			window.display();
		
	}

	printf("EXIT");
	return 0;
}