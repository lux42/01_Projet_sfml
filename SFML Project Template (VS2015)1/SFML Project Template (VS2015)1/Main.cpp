#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:

					window.close();
					break;
					
			}

		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}