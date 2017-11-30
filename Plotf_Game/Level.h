#pragma once
#include<SFML\Graphics.hpp>
#include <vector>

struct Environment
{

};

class Block
{
public:
	sf::Texture Texture;
	sf::RectangleShape RectBlock;
	bool transparency ;
	float friction, damage, bounce, speed, SpeedCoefficient;

	//unsigned int id;
	void setTexture();
	Block();
};

class Level
{
private:

public:
	std::vector<Block> idBlocks;
	std::vector<std::vector<int>> BlockCoordinate;
	Block Environment[3][3];
	//Environment getEnvironment(float x, float y);
	void updateEnvironment();
	Level();
};
