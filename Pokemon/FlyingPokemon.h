#include "Pokemon.h"
#ifndef FLYINGPOKEMON_H
#define FLYINGPOKEMON_H

class FlyingPokemon : public virtual Pokemon{
    public:
        FlyingPokemon(){};
        FlyingPokemon(PokemonState state){
            this->state = state;
        };
        virtual void fly() = 0;
        virtual PokemonState getState() override {
            return this->state;
        };
};

#endif