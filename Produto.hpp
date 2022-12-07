#pragma once

#include <iostream>
#include <string>

class Produto{
    private:
        int id;
        int quantidade_estoque; // quantidade de exemplares de cada produto
        float valor;
        std::string nome;
        std::string marca;

    public:
        int get_id();
        int get_quantidade_estoque();
        float get_valor();
        std::string get_nome();
        std::string get_marca();

        void set_id(int);
        void set_aumentar_quantidade_estoque(int);
        void set_diminuir_quantidade_estoque(int);
        void set_valor(float);
        void set_quantidade_estoque(int);
        void set_nome(std::string);
        void set_marca(std::string);
};
