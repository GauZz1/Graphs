#include "MatrizAdjacente.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

MatrizAdjacente::MatrizAdjacente(int n){ // construtor de matriz criando uma matriz vazia com zeros
    this->n = n;
    this->visitado = new bool [n];
    this->matriz = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matriz[i] = new int [n];
        for(int j = 0; j < n; j++)
        {
            matriz[i][j] = 0;
        }
    }
}   
        
void MatrizAdjacente::addAresta(int origem, int destino){

    if( origem > n || destino > n || origem < 0 || destino < 0) // confere se o vertice está dentro da quantidade e se não é menor que zero
    {   
        cout<<"Aresta inválida!\n";
    }
    else
    {
        matriz[origem - 1][destino - 1] = 1; // marca a posição de destino com 1 para mostrar que tem aresta entre eles
    }
}
        
void MatrizAdjacente::mostrar(){

    int i,j;
    for(i = 0;i < n;i++)
    {
        for(j = 0; j < n; j++)
            cout<<matriz[i][j]<<"  ";
        cout<<endl;
    }
}