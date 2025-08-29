#include <iostream>
#pragma once

using namespace std;

#ifndef ASSISTENTE_VIRTUAL_H
#define ASSISTENTE_VIRTUAL_H

class AssistenteVirtual{
    private:
        string nome, idioma, versao;
        int volume;
        bool microfoneAtivo;
    public:
        AssistenteVirtual();
        AssistenteVirtual(string, string, string, int, bool);
        ~AssistenteVirtual();
        int getVolume();
        bool getMicrofoneAtivo();
        void dizerOla();
        void executarComando(string);
        void definirIdioma(string);
        void atualizarVersão(string);
        void registrarLembrete();
        void resumoStatus();
};

#endif