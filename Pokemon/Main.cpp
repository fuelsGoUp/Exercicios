#include "Charizard.h"
#include "Charmander.h"
#include "Charmeleon.h"
#include "EvolutionManager.h"
#include "FIrePokemon.h"
#include "FlyingPokemon.h"
#include "Pokemon.h"
#include <iostream>
using namespace std;
// inclui todos
int main() {
    // estado inicial
    PokemonState state = {true, 1};  

    // Inicia o gerenciador de evoluções
    EvolutionManager manager;

    // Cria um novo pokemon
    Pokemon* myPokemon = manager.captureNew("Charmander", 1, state);
    cout << "Captured: ";
    myPokemon->printInfo();

    // Evolui o Charmander para Charmeleon
    myPokemon = manager.evolve(myPokemon);
    cout << "Evolved to: ";
    myPokemon->printInfo();

    // Evolui o Charmeleon para Charizard
    myPokemon = manager.evolve(myPokemon);
    cout << "Evolved to: ";
    myPokemon->printInfo();

    // Limpa a memoria
    delete myPokemon;
    // fim
    return 0;
}