#include "Produto.hpp"
#include "ProdutoDAO.hpp"
#include "ProdutoMgr.hpp"
#include "Sistema.hpp"
#include <iostream>

int main() {
  
  /* Criando Sistema*/
  Sistema *sistema = new Sistema();

  /* Criando Data Access Object */
  ProdutoDAO *produtoDAO = new ProdutoDAO();
  produtoDAO->set_quantidade(0);

  /* Criando Produto Manager*/
  ProdutoMgr *produtoMgr = new ProdutoMgr();
  produtoMgr->set_produtoDAO(produtoDAO);

  int validacao, senha, tarefa;
  printf("Olá, esse é um sistema de organização de estoque.\n Quem você "
         "é?\n1.Gerente\n2.Coletor\n\n");
  scanf("%d", &validacao);
  printf("\nSenha:  ");
  scanf("%d", &senha);
  if (senha == 123) {
    printf("\n\nBem vindo, o que deseja fazer?\n1.Cadastrar Produto\n2.Coletar "
           "Produto\n\n");
    scanf("%d", &tarefa);
  } else {
    printf("Senha Incorreta!");
  }

/* Cadastro de Novo Produto*/


    Produto *p1 = new Produto();
    produtoMgr->criar(p1);
    produtoDAO->set_quantidade(produtoDAO->get_quantidade() + 1);
    p1->set_nome("BLOND SHAMPOO");
    p1->set_marca("Due");
    p1->set_quantidade_estoque(0);
    p1->set_valor(35.50);
  
  if(tarefa == 1){ // cadastrar
    printf("\n\nPRODUTO CADASTRADO!");
    produtoDAO->imprima_dados_produto(*p1);
  }

  /* Coletar Produto: Entregador entrega produtos para o coletor receber*/
    
  else if(tarefa == 2){ //
    sistema->coletar_produto(p1, 5);
    produtoDAO->imprima_dados_produto(*p1);
  }

  return 0;
}























