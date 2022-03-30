class MatrizAdjacentePonderada
{
    private:
        int n;
        int **matriz;
        bool *visitado;
    public:
        MatrizAdjacentePonderada(int n);
        void addAresta(int origem, int destino, int peso);
        void mostrar();
        
};
