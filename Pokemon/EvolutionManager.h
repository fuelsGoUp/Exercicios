#include "Charmander.h"
#ifndef EVOLUTIONMANAGER_H
#define EVOLUTIONMANAGER_H

using namespace std;

class EvolutionManager {
    private:
        Pokemon* createPokemon(string, int, PokemonState);
    public:
        Pokemon* captureNew(string, int, PokemonState);
        Pokemon* evolve(Pokemon*);
};

#endif