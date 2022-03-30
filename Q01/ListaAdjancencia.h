#include<iostream>
#include<list>
#include<iterator>
using namespace std;

#ifndef listaAdjacencia
#define listaAdjacencia 


class ListaAdjacencia{
        //declarações de funções
    public: 
        ListaAdjacencia();
        void mostraListaAdj(list<int> adjLista[], int v);
        void addAresta(list<int> adjLista[], int u, int v);
};




#endif