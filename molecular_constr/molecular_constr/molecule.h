#pragma once
#include "atom.h"

class Molecule
{
private:
	Atom* atoms;
	int* counts;
	int size;

public: 
	
	Molecule(const Atom atoms[], const int count[], int size);


	//Molecule operator+(const Atom& a1) const;

	//Molecule operator-(const Atom& a1) const;

	//Molecule& operator=(const Atom& a1);

	//bool operator==(const Atom& a1) const;

	//bool operator!=(const Atom& a1) const;

	//bool operator>(const Atom& a1) const;

	//bool operator<(const Atom& a1) const;

	//bool operator>=(const Atom& a1) const;

	//bool operator<=(const Atom& a1) const;

	int countAmountAtom();

	~Molecule();

	void print() const;

};

