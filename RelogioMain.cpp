#include <iostream>
#include "Relogio.h"

using namespace std;

int main(){

	Relogio relogioMain(12, 23, 39);
	
	int hora, minuto, seg;
	
	cout <<"Digite um horario com hora, minuto e segundo"<< endl;
	cin >> hora >> minuto >> seg;

	relogioMain.setHora(hora);
	relogioMain.setMinuto(minuto);
	relogioMain.setSeg(seg);

	cout <<"A hora digitada foi ";
	relogioMain.toString(relogioMain.getHora(), relogioMain.getMinuto(), relogioMain.getSeg());

	
	relogioMain.avancaSeg();
	
	if(seg == 59){
	relogioMain.zeraSeg();
	relogioMain.avancaMinuto();
	}
	if(minuto == 59){
	relogioMain.zeraMinuto();
	relogioMain.zeraSeg();
	relogioMain.avancaHora();
	}	
	if(hora == 23 && minuto == 59){
	relogioMain.zeraHora();

	}
	

	cout <<"\nA hora com um segundo de adiantamento eh ";
	cout<<relogioMain.getHora() <<":"<< relogioMain.getMinuto() <<":"<< relogioMain.getSeg() <<endl;




return 0;
}
