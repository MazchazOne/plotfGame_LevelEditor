#pragma once
#include"Level.h"
#include<vector>
class Editor
{
public:
	std::vector<Block> idBlocks;
	std::vector<std::vector<int>> BlockCoordinate;
};