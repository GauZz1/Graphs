#include<iostream>
#include<list>
#include<iterator>
using namespace std;

#ifndef listaAdjacencia
#define listaAdjacencia 


class ListaAdjacencia{

    public: 
        ListaAdjacencia();
        void displayAdjList(list<int> adj_list[], int v);
        void add_edge(list<int> adj_list[], int u, int v);
};




#endif