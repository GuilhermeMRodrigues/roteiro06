#include "Televisao.h"
#include <iostream>

using namespace std;

	
Televisao::Televisao(int volume, int canal){
		this->volume = volume;
		this->canal = canal;
}

	int Televisao::getVolume(){
		return volume;
	}
	int Televisao::getCanal(){
		return canal;
	}
	
	void Televisao::setVolume(int volume){
		this->volume = volume;
	}
	void Televisao::setCanal(int canal){
		this->canal = canal;
	}
	void Televisao::aumentaVolume(){
		volume += 1;
	}
	void Televisao::baixaVolume(){
		volume--;
	}
	void Televisao::qualVolume(){
		volume;	
	}
	void Televisao::passaCanal(){
		canal++;	
	}
	void Televisao::voltaCanal(){
		canal--;
	}
	void Televisao::qualCanal(){
		canal;
	}
