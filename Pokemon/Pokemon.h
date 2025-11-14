#include <iostream>
#ifndef POKEMON_H
#define POKEMON_H

using namespace std;

struct PokemonState {
    bool shiny;
    int statusEvolution;
};  

class Pokemon {
    protected: 
        string name;
        int index, height, weight;
        PokemonState state;
    public:
        Pokemon(PokemonState){
            this->state = state;
        };
        Pokemon(){};
        Pokemon(string, int, PokemonState){
            this->name = name;
            this->index = index;
            this->state = state;
        };
        virtual ~Pokemon(){};
        virtual PokemonState getState() = 0;
        virtual int getEvolutionTargetIndex() = 0;
        virtual void printInfo() = 0;
};

#endif