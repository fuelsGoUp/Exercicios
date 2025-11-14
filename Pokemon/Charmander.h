#include <iostream>
#include "Pokemon.h"
#include "FIrePokemon.h"
#ifndef CHARMANDER_H
#define CHARMANDER_H

using namespace std;

class Charmander : public FirePokemon {
    public:
        Charmander(string);
        int getEvolutionTargetIndex();
        void burnUp() override;
        void printInfo() override;
        PokemonState getState() override {
            return this->state;
        };
};

#endif