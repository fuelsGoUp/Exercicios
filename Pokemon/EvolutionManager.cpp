#include "EvolutionManager.h"
#include "Charmander.h"
#include "Charmeleon.h"
#include "Charizard.h"
#include "FIrePokemon.h"
#include "FlyingPokemon.h"
#include <iostream>

using namespace std;

Pokemon* EvolutionManager::createPokemon(string name, int speciesIndex, PokemonState state){
    if(speciesIndex == 0){
        return new Charmander(name);
    }
    if(speciesIndex == 1){
        return new Charmeleon(state);
    }
    if(speciesIndex == 2){
        return new Charizard(state);
    }
    return nullptr;
};

Pokemon* EvolutionManager::captureNew(string name, int speciesIndex, PokemonState state) {
    return createPokemon(name, speciesIndex, state);
}

Pokemon* EvolutionManager::evolve(Pokemon* oldPokemon) {
    if (oldPokemon->getEvolutionTargetIndex() == 0) {
        PokemonState state = oldPokemon->getState();
        delete oldPokemon; 
        Pokemon* pokemon = createPokemon("Charmeleon", 1, state); 
        return pokemon;
    }
    if (oldPokemon->getEvolutionTargetIndex() == 1) {
        PokemonState state = oldPokemon->getState();
        delete oldPokemon; // Delete the old Pokemon object
        Pokemon* pokemon = createPokemon("Charizard", 2, state); 
        return pokemon;
    }
    if( oldPokemon->getEvolutionTargetIndex() == 2) {
        cout << "This Pokemon cannot evolve further." << endl;
        return oldPokemon; 
    }
    return nullptr; 
}