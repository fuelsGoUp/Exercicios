#include <iostream>
#pragma once

using namespace std;

#ifndef SMART_HOUSE_H
#define SMART_HOUSE_H

class SmartHouse{
    private:
        string modo;
        double temperaturaDesejada;
        bool luzesLigadas, alarmeAtivo, portaTrancada;
    public:
        SmartHouse();
        SmartHouse(string, double, bool, bool, bool);
        ~SmartHouse();
        double getTemperatura();
        string getModo();
        void setTempertura(double);
        void setModo(string);
        void ligarLuzes();
        void ativarAlarme();
        void TrancarPorta();
        void status();
        void aplicarSena(string);
};

#endif