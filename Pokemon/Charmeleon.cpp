#include <iostream>
#include "FIrePokemon.h"
#include "Charmeleon.h"

using namespace std;

Charmeleon::Charmeleon(PokemonState state){
    Charmeleon::index = 1;
    this->state = state;
};

int Charmeleon::getEvolutionTargetIndex(){
    return index;
}

void Charmeleon::burnUp(){
    cout << "Burning up!";
}

void Charmeleon::printInfo(){
    cout << "Pokemon: Charmeleon, Index: " << Charmeleon::index << ", Shiny: " << (this->state.shiny ? "Yes" : "No") << ", Status Evolution: " << this->state.statusEvolution << endl;
}