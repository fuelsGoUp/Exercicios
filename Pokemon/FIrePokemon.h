#include "Pokemon.h"
#ifndef FIREPOKEMON_H
#define FIREPOKEMON_H

class FirePokemon : public virtual Pokemon{
    public:
        FirePokemon(PokemonState state){
            this->state = state;
        };
        FirePokemon(){};
        virtual void burnUp() = 0;
        virtual PokemonState getState() override {
            return this->state;
        };
};

#endif