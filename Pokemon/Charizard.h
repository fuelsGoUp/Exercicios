#include "FIrePokemon.h"
#include "FlyingPokemon.h"
#include <iostream>
#ifndef CHARIZARD_H
#define CHARIZARD_H

class Charizard : public FirePokemon, public FlyingPokemon {
    public:
        Charizard(PokemonState);
        int getEvolutionTargetIndex();
        void fly() override;
        void burnUp() override;
        void printInfo() override;
        PokemonState getState() override {
            return this->state;
        };
};

#endif