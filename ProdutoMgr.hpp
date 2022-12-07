#pragma once

#include "ProdutoDAO.hpp"

class ProdutoMgr
{
    private:
        ProdutoDAO *produto_DAO;
    public:
        bool criar(Produto *);
        Produto buscar(int);
        void set_produtoDAO(ProdutoDAO*);
};
