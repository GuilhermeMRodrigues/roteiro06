#include "Relogio.h"
#include <iostream>

using namespace std;


Relogio::Relogio(int hora, int minuto, int seg){
		this->hora = hora;
		this->minuto = minuto;
		this->seg = seg;

}
	int Relogio::getHora(){
		return hora;
	}
	
	int Relogio::getMinuto(){
		return minuto;
	}
	int Relogio::getSeg(){
		return seg;
	}
	
	void Relogio::setHora(int hora){
		this->hora = hora;
	}
	void Relogio::setMinuto(int minuto){
		this->minuto = minuto;		
	}
	void Relogio::setSeg(int seg){
		this->seg = seg;
	}
	void Relogio::avancaSeg(){
		seg += 1; 
	}
	void Relogio::zeraSeg(){
		seg = 00;	
	}
	void Relogio::avancaMinuto(){
		minuto += 1;	
	}
	void Relogio::zeraMinuto(){
		minuto = 00;		
	}
	void Relogio::avancaHora(){
		hora += 1;	
	}
	void Relogio::zeraHora(){
		hora = 0;
	}
	
	void Relogio::toString(int hora, int minuto, int seg){
		cout<<hora<<":"<<minuto<<":"<<seg<< endl;
	}

