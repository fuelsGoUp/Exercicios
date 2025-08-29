#ifndef ANAMNESE_H
#define ANAMNESE_H

#include <iostream>
#pragma once

using namespace std;

class Anamnese{
    private:
        string nome, alergias, doençasPreexistentes, medicamentosEmUso;
        int idade;
        double pesoKg, alturaM;
    public:
        Anamnese();
        Anamnese(string, string, string, string, int, double, double);
        ~Anamnese();
        string getNome();
        string getAlergias();
        string getDoençasPreexistentes();
        string getMedicamentosEmuso();
        int getIdade();
        double getPesoKg();
        double getAlturaM();
        void setNome(string);
        void setAlergias(string);
        void setDoençasPreexistentes(string);
        void setMedicamentosEmuso(string);
        void setIdade(int);
        void setPesoKg(double);
        void setAlturaM(double);
        double calcularIMC(double peso, double altura);
        void imprimirAnamnese();
};

#endif