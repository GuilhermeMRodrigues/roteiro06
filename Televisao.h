#ifndef TELEVISAO_H
#define TELEVISAO_H
#include <iostream>


class Televisao{
private:
	int volume, canal;

public:
	Televisao(int volume, int canal);
	
	int getVolume();
	int getCanal();

	void setVolume(int volume);
	void setCanal(int canal);
	
	void aumentaVolume();
	void baixaVolume();
	void passaCanal();
	void voltaCanal();
	void qualVolume();
	void qualCanal();



};
#endif
