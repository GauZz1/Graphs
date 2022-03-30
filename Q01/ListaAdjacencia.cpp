#include "ListaAdjancencia.h"
#include "stdio.h"
#include "stdlib.h"

ListaAdjacencia :: ListaAdjacencia(){} //construtor vazio

void ListaAdjacencia :: addAresta(list<int> adjLista[], int u, int v) {    //adiciona v na lista u pois essa é uma Lista de Sucessores
   adjLista[u].push_back(v);
}

void ListaAdjacencia :: mostraListaAdj(list<int> adjLista[], int v) {
   for(int i = 0; i<v; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adjLista[i].begin(); it != adjLista[i].end(); ++it) { // iterator pega desde o começo begin() da lista até o fim end()
         cout << *it << " ";
      }
      cout << endl;
   }
}