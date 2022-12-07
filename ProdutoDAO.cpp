#pragma once

#include "ProdutoDAO.hpp"
#include <string>


bool ProdutoDAO::criar(Produto *produto_novo){
    if(this->quantidade == MAX_PRODUTO) return false;
  
    produto_novo->set_id(this->quantidade);
    produto[quantidade] = *produto_novo;

    return true;
}

Produto ProdutoDAO::buscar(int id){
    for(int i = 0; i <= this->quantidade; i++){
        if(this->produto[i].get_id() == id){
            return this->produto[i];
        }
    } 
  
    return this->produto[this->quantidade];
}

bool ProdutoDAO::verificar_estoque(Produto &produto){
    return produto.get_quantidade_estoque();
}

void ProdutoDAO::diminuir_estoque(Produto &produto, int quantidade){
    produto.set_diminuir_quantidade_estoque(quantidade);
}


void ProdutoDAO::aumentar_estoque(Produto &produto, int quantidade){
    produto.set_aumentar_quantidade_estoque(quantidade);
}

bool ProdutoDAO::get_quantidade(){
    return quantidade;
}

void ProdutoDAO::set_quantidade(int valor){
    quantidade = valor;
}

using std::cout; using std::cin;
using std::endl; using std::string;

bool ProdutoDAO::imprima_dados_produto(Produto &produto){
  printf("\n\nDADOS DO PRODUTO\n");
  printf("ID: %d\n", produto.get_id());
  printf("NOME:");
    std::string nome = produto.get_nome();
    cout << nome;
    cout << endl;
  printf("MARCA:");
    std::string marca = produto.get_marca();
    cout << marca;
    cout << endl;
  printf("PREÇO: %.2f", produto.get_valor());
  printf("\nQUANTIDADE EM ESTOQUE: %d\n\n", produto.get_quantidade_estoque());

  return true;
}
