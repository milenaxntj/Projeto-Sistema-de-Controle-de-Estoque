#pragma once

#include "ProdutoDAO.hpp"
#include "ProdutoMgr.hpp"

class Sistema{
    private:
        ProdutoDAO* produtoDAO;
        ProdutoMgr* produtoMgr;
    public:
        bool coletar_produto(Produto*, int);
};