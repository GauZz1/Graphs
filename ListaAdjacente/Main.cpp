#include<iostream>
#include<list>
#include<iterator>
#include "ListaAdjancencia.h"

using namespace std;

int main() {
   cout << "Digite a quantidade de vértices: ";
   int x;
   cin >> x;
   list<int> adj_list[x]; // inicia uma lista
   ListaAdjacencia la; //cria um objeto de lista adjacente
   int A1, A2;
   int maxVertices = x * (x-1);
   for(int i=0; i<maxVertices ;i++){

       cout << "Digite a aresta (-1 -1 para sair): ";
       cin >> A1 >> A2;
       cout << endl;
       if((A1 == -1) && (A2 == -1)){ // condição de parada
          break;
       }
       else la.addAresta(adj_list, A1, A2); // função para adicionar o segundo vertice a lista do primeiro
   }
   
   la.mostraListaAdj(adj_list, x); // mostrar as listas de todos os vértices

   return 0;
}