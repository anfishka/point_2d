#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Player.h"
#include "Prize.h"

class Game
{
private:
	char** _field;
	int _width;
	int _height;
	Player _player;
	Prize _prize;
	Point2D _prevPlayerPos;
	bool _moveValid;

public:
	Game(int w, int h) : _width(w), _height(h), _moveValid(false), _player(w / 2, h / 2)
	{
		_field = new char* [_height];
		for (int i = 0; i < _height; i++)
		{
			_field[i] = new char[_width];
			for (int j = 0; j < _width; j++)
			{
				_field[i][j] = ' ';
			}
		}
		genPrize();
	}
	~Game()
	{
		for (int i = 0; i < _height; ++i)
		{
			delete[] _field[i];
		}
		delete[] _field;
	}


	void printField()
	{
		system("cls");
		for (int i = 0; i < _height; ++i)
		{
			for (int j = 0; j < _width; ++j)
			{
				if (i == _player.y && j == _player.x)
				{
					std::cout << '*';
				}
				else if (i == _prize.y && j == _prize.x)
				{
					std::cout << '$';
				}
				else
				{
					std::cout << _field[i][j];
				}
			}
			std::cout << std::endl;
		}
	}
private:
	void genPrize()
	{
		srand(time(NULL));
		_prize = Prize(rand() % _width, rand() % _height);
	}

};

