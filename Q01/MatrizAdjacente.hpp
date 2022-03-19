class MatrizAdjacente
{
    private:
        int n;
        int **matriz;
        bool *visitado;
    public:
        MatrizAdjacente(int n);
        void addAresta(int origin, int destin);
        void mostrar();
        
};
