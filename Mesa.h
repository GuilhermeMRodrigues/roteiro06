#ifndef MESA_H
#define MESA_H
#include "Pedido.h"

#include <iostream>
#include <string>

using namespace std;

class Mesa{
protected:
	Pedido pedidos[3];

public:
	int numero, quantidade;
	float preco;
	string desc;

	Mesa();
	virtual~Mesa();

	void setMesa(int i, int numero, int quantidade, float preco, string desc);
	Pedido getMesa();
	
	void adicionaPedido(int i);
	void zeraPedido(int i);
	float calcTotal();






};

#endif
