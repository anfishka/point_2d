#include "molecule.h"
#include <iostream>

Molecule::Molecule(const Atom atoms[], const int counts[], int size) {
	this->size = size;
	this->atoms = new Atom[size];
	this->counts = new int[size];

	for (int i = 0; i < size; ++i)
	{
		this->atoms[i] = atoms[i];
		this->counts[i] = counts[i];
	}
}

void Molecule::print() const
{
	for (int i = 0; i < size; ++i)
	{
		if (counts[i] == 1){
			std::cout << atoms[i].getSymb();
		}
		else {
			std::cout << atoms[i].getSymb() << counts[i];
		}
		
	}
	std::cout << std::endl;
}

int Molecule::countAmountAtom()
{
	int result = 0;
	int atom = 1;

	for (int i = 0; i < size; ++i)
	{
		result += atom * counts[i];
	}
	return result;
}

Molecule::~Molecule()
{
	delete[] atoms;
	delete[] counts;
}

//
//Molecule Molecule::operator-(const Atom& a1) const
//{
//	Molecule result(_atom1, _atom2);
//	result._atom2.setAtomNum(result._atom2.getAtomNum() - a1.getAtomNum());
//	return result;
//}
//
//Molecule& Molecule::operator=(const Molecule& a1)
//{
//	if (this != &a1)
//	{
//		_atomNum = a1._atomNum;
//	}
//	return *this;
//}
//
//bool Molecule::operator==(const Atom& a1) const
//{
//	return _atomNum == a1._atomNum;
//}
//
//bool Molecule::operator!=(const Atom& a1) const
//{
//	return _atomNum != a1._atomNum;
//}
//
//bool Molecule::operator>(const Atom& a1) const
//{
//	return _atomNum > a1._atomNum;
//}
//
//bool Molecule::operator<(const Atom& a1) const
//{
//	return _atomNum < a1._atomNum;
//}
//
//bool Molecule::operator>=(const Atom& a1) const
//{
//	return _atomNum >= a1._atomNum;
//}
//
//bool Molecule::operator<=(const Atom& a1) const
//{
//	return _atomNum <= a1._atomNum;
//}

