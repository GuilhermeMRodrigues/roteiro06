#include "MesaCaseira.h"

using namespace std;

MesaCaseira::MesaCaseira(){

}
MesaCaseira::~MesaCaseira(){

}

double MesaCaseira::MesaCaseira(){
    int i;
    double t = 0;

    for(i = 0; i < 3; i++){
        t += mesas[i].calcTotal();
    }

    return t;
}
