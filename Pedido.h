#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include <string>


using namespace std;

class Pedido{
protected:
	int numero, quantidade;
	float preco;
	string desc;
public:
	Pedido();
	virtual~Pedido();
	
	int getNumero();
	int getQuantidade;	
	float getPreco();
	string getDesc();

	void setNumero(int numero);
	void setQuantidade(int quantidade);
	void setPreco(float preco);
	void setDesc(string desc);


};
#endif
