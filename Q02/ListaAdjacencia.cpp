#include "ListaAdjancencia.h"
#include "stdio.h"
#include "stdlib.h"

ListaAdjacencia :: ListaAdjacencia(){}

void ListaAdjacencia :: add_edge(list<int> adj_list[], int u, int v) {    //add v into the list u, and u into list v
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}

void ListaAdjacencia :: displayAdjList(list<int> adj_list[], int v) {
   for(int i = 0; i<v; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
         cout << *it << " ";
      }
      cout << endl;
   }
}