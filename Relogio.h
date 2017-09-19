#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>

class Relogio{
private:
	int hora, minuto, seg;

public:
	Relogio(int hora, int minuto, int seg);
	
	int getHora();
	int getMinuto();
	int getSeg();

	void setHora(int hora);

	void setMinuto(int minuto);

	void setSeg(int seg);
	
	void setHorario(int hora, int minuto, int seg);

	void toString(int hora, int minuto, int seg);

	void avancaSeg();
	void avancaMinuto();
	void avancaHora();
	void zeraSeg();
	void zeraMinuto();
	void zeraHora();




};
#endif
