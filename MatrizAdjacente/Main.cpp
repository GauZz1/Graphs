#include "MatrizAdjacente.hpp"
#include <iostream>
using namespace std;

int main()
{
    int vertices, max_vertices, origem, destino;

    cout<<"Digite o numero de vertices: ";
    cin>>vertices;
    
    MatrizAdjacente ma(vertices);
    max_vertices = vertices * (vertices - 1);
    
    for (int i = 0; i < max_vertices; i++)
    {
        cout<<"Digite a aresta (-1 -1 to exit): ";
        cin>>origem>>destino;
        if((origem == -1) && (destino == -1))
            break;
        ma.addAresta(origem, destino);
    }
    ma.mostrar();
    
    return 0;
}