#pragma once
#include<SFML\Graphics.hpp>

struct ControlKey
{
	sf::Keyboard::Key Up;
	sf::Keyboard::Key Down;
	sf::Keyboard::Key Right;
	sf::Keyboard::Key Left;
};

class Player: ControlKey
{
private:
	int  Speed;

public:
	sf::RectangleShape RectPlayer;
	Player();
	Player(sf::Vector2f coord);
	void Control(sf::Time* Time);
	sf::RectangleShape* getRectangle();
};