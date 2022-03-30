#include "MatrizAdjacentePonderada.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

MatrizAdjacentePonderada::MatrizAdjacentePonderada(int n){ // construtor de matriz criando uma matriz vazia com zeros
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
        
void MatrizAdjacentePonderada::addAresta(int origem, int destino, int peso){ // confere se o vertice está dentro da quantidade e se não é menor que zero

    if( origem > n || destino > n || origem < 0 || destino < 0)
    {   
        cout<<"Aresta inválida!\n";
    }
    else
    {
        matriz[origem - 1][destino - 1] = peso; // marca a posição de destino com o peso para mostrar que tem aresta entre eles e o peso dela
    }
}
        
void MatrizAdjacentePonderada::mostrar(){

    int i,j;
    for(i = 0;i < n;i++)
    {
        for(j = 0; j < n; j++)
            cout<<matriz[i][j]<<"  ";
        cout<<endl;
    }
}