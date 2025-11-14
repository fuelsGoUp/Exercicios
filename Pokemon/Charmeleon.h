#include <iostream>
#include "FIrePokemon.h"
#ifndef CHARMELEON_H
#define CHARMELEON_H

using namespace std;

class Charmeleon : public FirePokemon {
    public:
        Charmeleon(PokemonState);
        int getEvolutionTargetIndex();
        void burnUp() override;
        void printInfo() override;
        PokemonState getState() override {
            return this->state;
        };
};

#endif