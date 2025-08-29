#include <iostream>
#pragma once

#ifndef CORPO_CELESTE_H
#define CORPO_CELESTE_H

using namespace std;

enum TipoCorpo {Estrela, Planeta, Lua, Asteroide, Cometa, Outro };

class CorpoCeleste{
    private:
        string nome;
        TipoCorpo tipo;
        double massaKg, raioKm;
    public:
        CorpoCeleste();
        CorpoCeleste(string, TipoCorpo, double, double);
        ~CorpoCeleste();
        string getNome();
        TipoCorpo getTipo();
        double getMassaKg();
        double getRaioKm();
        void setNome(string);
        void setTipo(TipoCorpo);
        void setMassaKg(double);
        void setRaioKm(double);
        double calcularDensidade(double, double);
        double calcularGravidadeSuperficial(double, double);
        void descricao();
};

#endif