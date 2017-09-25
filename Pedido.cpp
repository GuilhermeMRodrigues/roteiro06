#include "Pedido.h"
#include <iostream>

using namespace std;
	
Pedido::Pedido(){
	
}
Pedido::~Pedido(){

}
	
	int Pedido::getNumero(){
		return numero;
	}
	int Pedido::getQuantidade(){
		return quantidade;	
	}
	string Pedido::getDesc(){
		return desc;	
	}
	float Pedido::getPreco(){
		return preco;
	}

	
	void Pedido::setNumero(int numero){
		this-> numero = numero;
	}
	void Pedido::setQuantidade(int quantidade){
		this-> quantidade = quantidade;	
	}
	void Pedido::setDesc(string desc){
		this-> desc = desc;
	}
	void Pedido::setPreco(float preco){
		this-> preco = preco;
	}

