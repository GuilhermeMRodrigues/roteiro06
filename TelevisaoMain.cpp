#include "Televisao.h"
#include <iostream>

using namespace std;

int main(){

	Televisao Televisao(22, 05);
	
	int volumefunc, volume, volumeatual;
	int canalfunc, canal, canalatual;
	
	cout <<"[Volume = 22]" << endl;
	volume = 0;
	
	cout <<"----Digite [1] para aumentar o volume----\n"
	       "----Digite [0] para baixar o volume -----\n" << endl;
	
	cin >> volumefunc;
	  
	cout << "----Para Saber qual o volume atual digite [4]----\n" << endl;
	
	cin >> volumeatual;
	
	switch(volumefunc)
	{
		case 1:
		Televisao.aumentaVolume();
		break;

		case 0	:
		Televisao.baixaVolume();
		break;
	
	}

	
	switch(volumeatual)
	{	
		case 4:

		Televisao.qualVolume();
		cout <<"[Volume = "<<Televisao.getVolume()<<"]" << endl;
		break;
	}

	cout << "\n\n\nCanal = [5]" << endl;
	
	canal = 05;
	
	cout <<"----Digite [1] para passa o canal----\n"
	       "----Digite [0] para voltar o canal -----\n" << endl;

	cin >> canalfunc;
	
	cout << "----Para Saber qual o canal atual digite [4]----\n" << endl;
	
	cin >> canalatual;
	
	switch(canalfunc)
	{
	
		case 1:
		Televisao.passaCanal();
		break;
		
		case 0:
		Televisao.voltaCanal();
		break;	
	}
	
	switch(canalatual)
	{
		case 4:
		Televisao.qualCanal();
		cout <<"Canal = ["<< Televisao.getCanal() << "]" << endl;
		break; 
	

	}
	
	
	
	



return 0;
}
