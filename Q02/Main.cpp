#include<iostream>
#include<list>
#include<iterator>
#include "ListaAdjancencia.h"

using namespace std;

int main() {
   cout << "Digite a quantidade de vértices: ";
   int x;
   cin >> x;
   list<int> adj_list[x];
   ListaAdjacencia la;
   int A1, A2;
   for(int i=0; i<x ;i++){

       cout << "Digite a aresta: ";
       cin >> A1 >> A2;
       cout << endl;
       
       la.add_edge(adj_list, A1, A2); // função para adicionar o segundo
                                     // vertice a lista do primeiro
   }
   
   la.displayAdjList(adj_list, x); // mostrar as listas de todos os vértices

   return 0;
}