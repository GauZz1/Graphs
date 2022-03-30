#include "MatrizAdjacentePonderada.hpp"
#include <iostream>
using namespace std;

int main()
{
    int vertices, maxArestas, origem, destino, peso;

    cout<<"Digite o numero de vertices: ";
    cin>>vertices;
    
    MatrizAdjacentePonderada ma(vertices);
    maxArestas = vertices * (vertices - 1); // encontrar o número máximo de arestas para o grafo
    
    for (int i = 0; i < maxArestas; i++)
    {
        cout<<"Digite a aresta (-1 -1 para sair): ";
        cin>>origem>>destino;
        cout<<"Digite o peso: ";
        cin>>peso;
        if((origem == -1) && (destino == -1)) {break;}
        cout<<"Digite o peso: ";
        cin>>peso;
        ma.addAresta(origem, destino, peso);
    }
    ma.mostrar();
    
    return 0;
}