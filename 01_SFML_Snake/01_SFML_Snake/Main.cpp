// Version 1.0
// Créateur: - Gaëtan Sprunger
//			 - Lucas Neuahus
//
// Création du projet
// Date : 24/11/2016


//----------------------------------------------------
// INCLUDES
//----------------------------------------------------
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include "fonctions_snake.h"
//#include <Text.hpp>

//----------------------------------------------------
// VARIABLES GLOBAL
//----------------------------------------------------


using namespace std;
string culoare;

//----------------------------------------------------
// STRUCTURES
//----------------------------------------------------

struct Game
{
	int pos[20][20];			// 0 - 19
	char nom[20];
}snake;

//----------------------------------------------------
// PROTOTYPE
//----------------------------------------------------





//cout << "1" << endl;

//----------------------------------------------------
// CODE PRINCIPAL
//----------------------------------------------------

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	
	
	strcpy_s(snake.nom, "Lux");
	
	sf::Font font;

	if (!font.loadFromFile("Titillium-Light.ttf"))
	{
		// handle error
	}	
	
	

	sf::Text Menu, Text_start, Text_exit;
	// MENU
	Menu.setFont(font);
	Menu.setString(" Bienvenu dans le Snake ");
	Menu.setColor(sf::Color::White);
	Menu.setCharacterSize(40);
	Menu.setOrigin(0, 0);
	Menu.setPosition(150, 0);
	// START
	Text_start.setFont(font);
	Text_start.setString("F1 - START");
	Text_start.setColor(sf::Color::White);
	Text_start.setCharacterSize(25);
	Text_start.setOrigin(0, 0);
	Text_start.setPosition(10, 400);
	// EXIT
	Text_exit.setFont(font);
	Text_exit.setString("F12 - EXIT");
	Text_exit.setColor(sf::Color::White);
	Text_exit.setCharacterSize(25);
	Text_exit.setOrigin(0, 0);
	Text_exit.setPosition(10, 500);



	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::F12))
			{
					window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::F1))
			{
				cout << "Bonjour :D " << endl;
			}
				
			

		}


			window.clear(sf::Color::Black);
			window.draw(Menu);
			window.draw(Text_start);
			window.draw(Text_exit);
			window.display();
		
	}

	cout << "EXIT" << endl;

	return 0;
}