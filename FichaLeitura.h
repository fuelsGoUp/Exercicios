#include <iostream>
#pragma once

#ifndef FICHA_LEITURA_H
#define FICHA_LEITURA_H

using namespace std;

class FichaLeitura{
    private:
        string titulo, autor;
        int anoPublicado, numPaginas, paginaAtual, nota0a5;
        bool lido;
    public:
        FichaLeitura();
        FichaLeitura(string, string, int, int, int , int, bool);
        ~FichaLeitura();
        string getTitulo();
        string getAutor();
        int getAnoPublicado();
        int getNumpaginas();
        int getPaginaAtual();
        int getNota0a5();
        bool getLido();
        void setTitulo(string);
        void setAutor(string);
        void setAnoPublicado(int);
        void setNumPaginas(int);
        void setPaginaAtual(int);
        void setNota0a5(int);
        void setLido(bool);
        double percentualLido();
        void resumo();
};

#endif