#include <iostream>
#include "atom.h"
#include "molecule.h"
#include "periodic_table.h"



int main()
{
//    Atom hydrogen = periodicTable[0];
  //  Atom oxygen = periodicTable[7];


    Atom water[] = { periodicTable[0], periodicTable[7] };
    int waterAtomsAmount[] = { 2, 1 };
    
    Molecule H2O(water, waterAtomsAmount, sizeof(water) / sizeof(water[0]));
    H2O.print();
    int atomCount = H2O.countAmountAtom();
    std::cout << "Amount of atoms in molecule: " << atomCount << std::endl;

  //  periodic_table();
  
    return 0;

}

