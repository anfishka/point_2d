#pragma once
#include <iostream>

class Atom
{
private:
	int _atomNum;
	std::string _symb;
	std::string _atomName;
	

public:

	Atom() : _atomNum(0) {}

	Atom(int atomNum, const std::string& symb, const std::string& atomName) : _atomNum(atomNum), _symb(symb), _atomName(atomName) {}

	void print() const;

	int getAtomNum() const;

	std::string getSymb();

	void setAtomNum(int atomNum);


	
};

