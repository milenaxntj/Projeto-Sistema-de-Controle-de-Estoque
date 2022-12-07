#pragma once

#include "Produto.hpp"

int Produto::get_id(){
    return id;
}

int Produto::get_quantidade_estoque(){
    return quantidade_estoque;
}

float Produto::get_valor(){
    return valor;
}

std::string Produto::get_marca(){
    return marca;
}

std::string Produto::get_nome(){
    return nome;
}

void Produto::set_id(int id){
    this->id = id;
}

void Produto::set_aumentar_quantidade_estoque(int quantidade){
    this->quantidade_estoque += quantidade;
}

void Produto::set_diminuir_quantidade_estoque(int quantidade){
    this->quantidade_estoque -= quantidade;
}

void Produto::set_valor(float valor){
    this->valor = valor;
}

void Produto::set_nome(std::string nome){
    this->nome = nome;
}

void Produto::set_marca(std::string marca){
    this->marca = marca;
}

void Produto::set_quantidade_estoque(int quantidade){
    this->quantidade_estoque = quantidade;
}