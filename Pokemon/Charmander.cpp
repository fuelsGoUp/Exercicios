#include <iostream>
#include "Pokemon.h"
#include "FIrePokemon.h"
#include "Charmander.h"

using namespace std;

Charmander::Charmander(string name){
    Charmander::name = name;
    Charmander::index = 0;
};

int Charmander::getEvolutionTargetIndex(){
    return index;
}

void Charmander::burnUp(){
    cout << "Burning up!";
}

void Charmander::printInfo(){
    cout << "Pokemon: " << Charmander::name << ", Index: " << Charmander::index << endl;
}