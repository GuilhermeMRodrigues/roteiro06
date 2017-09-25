#include "Mesa.h"
#include <iostream>
#include <string>

using namespace std;

Mesa::Mesa(){

}

Mesa::~Mesa(){

}

void Mesa::Mesa(int i, int numero, int quantidade, float preco, string desc){

	pedidos[i].setNumero(numero);
	pedidos[i].setQuantitade(quantidade);
	pedidos[i].setPreco(preco);
	pedidos[i].setDesc(desc);

}
Pedido Mesa::getMesa(){
	int i;
	
	for(i = 0; i < 3; i++){

		return pedidos[i];
	}

}
	
void Mesa::adicionaPedido(int i){
	int n;
	pedidos[i].setQuantidade(5);

 	cout <<"\n\n" << pedidos[1].getQuantidade() << "\n\n";


}

void Mesa::zeraPedido(int i){
	    for(i = 0; i < 3; i++){
        pedidos[i].setQuantidade(0);
    }
}

float Mesa::calcTotal(){
 int i = 0;
    double total = 0;

    for(i = 0; i < 1; i++){
        total = (pedidos[i].getQuantidade()*pedidos[i].getPreco());
    }
    
    return total;



}


