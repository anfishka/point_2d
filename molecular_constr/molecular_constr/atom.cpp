#include "atom.h"
#include <iostream>



void Atom::print() const {
	std::cout << "Atom number: " << _atomNum << std::endl;
	std::cout << "Symbol: " << _symb << std::endl;
	std::cout << "Atom name: " << _atomName << std::endl;

}

int Atom::getAtomNum() const
{
	return _atomNum;
}

std::string Atom::getSymb()
{
	return _symb;
}


void Atom::setAtomNum(int atomNum)
{
	_atomNum = atomNum;
}

