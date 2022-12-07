#pragma once

#include "Produto.hpp"
#define MAX_PRODUTO 300

class ProdutoDAO{
    private:
        Produto produto[MAX_PRODUTO];
        int quantidade; 
    public:
        bool criar(Produto *);
        Produto buscar(int);

        bool imprima_dados_produto(Produto &);
        bool verificar_estoque(Produto &);
        void diminuir_estoque(Produto &, int);
        void aumentar_estoque(Produto &, int);

        bool get_quantidade();
        void set_quantidade(int);
};