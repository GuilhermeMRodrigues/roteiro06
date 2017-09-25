#include <iostream>
#include "Pedido.h"
#include "Mesa.h"
#include "MesaCaseira.h"

using namespace std;

int main(){

	Pedido p;
	Mesa m;
	MesaCaseira mc;
	
	int n, q, i, j;
	double p;
	string d;

	for(i = 0; i < 3; i++){
            for(j = 0; j < 3; i++){
                cout << "Digite o numero da mesa\n\n";
                cin >> n;

                cout << "Digite descricao do pedido\n\n";
                cin >> d;

                cout << "Digite a quantidade do pedido\n\n";
                cin >> q;

                cout << "Digite o preco do pedido:\n\n";
                cin >> p;

                mc.mesas[i].setMesa(j,q,p,n,d);
            }
    }

	cout << "Valor total: " << mc.calcTotal() << endl;


return 0;
}
