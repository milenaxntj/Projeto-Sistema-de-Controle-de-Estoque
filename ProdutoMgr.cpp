
#include "ProdutoDAO.hpp"
#include "ProdutoMgr.hpp"

bool ProdutoMgr::criar(Produto *produto){
    return this->produto_DAO->criar(produto);
}

Produto ProdutoMgr::buscar(int id){
    return this->produto_DAO->buscar(id);
}

void ProdutoMgr::set_produtoDAO(ProdutoDAO *novo){
    this->produto_DAO = novo;
}




