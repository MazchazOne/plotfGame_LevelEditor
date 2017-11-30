#include"Entity.h"

Player::Player(){}

Player::Player(sf::Vector2f coord)  
{
	RectPlayer.setSize(sf::Vector2f(1, 1));
	RectPlayer.setPosition(coord);
	RectPlayer.setFillColor(sf::Color::Black);
	Speed = 500;
	Up = sf::Keyboard::Up;
	Down = sf::Keyboard::Down;
	Right = sf::Keyboard::Right;
	Left = sf::Keyboard::Left;
};

void Player::Control(sf::Time* Time) 
{
	if (sf::Keyboard::isKeyPressed(Up)) RectPlayer.move(0,-Speed * Time->asSeconds());
	if (sf::Keyboard::isKeyPressed(Down)) RectPlayer.move(0, Speed * Time->asSeconds());
	if (sf::Keyboard::isKeyPressed(Right)) RectPlayer.move(Speed * Time->asSeconds(), 0);
	if (sf::Keyboard::isKeyPressed(Left)) RectPlayer.move(-Speed * Time->asSeconds(), 0);
};

sf::RectangleShape* Player::getRectangle()
{
	return &RectPlayer;
}
