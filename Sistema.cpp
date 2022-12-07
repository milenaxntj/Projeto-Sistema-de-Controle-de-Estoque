#pragma once

#include "Sistema.hpp"
#include "ProdutoDAO.hpp"

bool Sistema::coletar_produto(Produto *produto, int quantidade){
  produto->set_aumentar_quantidade_estoque(5);
  printf("PRODUTO COLETADO!\n");
  return true;
}