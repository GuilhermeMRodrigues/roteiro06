#ifndef MESACASEIRA_H
#define MESACASEIRA_H

#include "Mesa.h"
#include <string>


using namespace std;

class MesaCaseira{
public:
	
	Mesa mesas[3];

	MesaCaseira();
	virtual~MesaCaseira();

	float calcTotal();





}
#endif 
