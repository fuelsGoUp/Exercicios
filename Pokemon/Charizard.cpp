#include <iostream>
#include "FIrePokemon.h"
#include "FlyingPokemon.h"
#include "Charizard.h"

using namespace std;

Charizard::Charizard(PokemonState state){
    Pokemon::index = 2;
    Pokemon::state = state;
};

int Charizard::getEvolutionTargetIndex(){
    return Pokemon::index;
}

void Charizard::burnUp(){
    cout << "Burning up!";
}

void Charizard::fly(){
    cout << "Flying high!";
}

void Charizard::printInfo(){
    cout << "Pokemon: Charizard, Index: " << Pokemon::index << ", Shiny: " << (Pokemon::state.shiny ? "Yes" : "No") << ", Status Evolution: " << Pokemon::state.statusEvolution << endl;
}