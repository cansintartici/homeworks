#include "../include/hw1.h"
#include <iostream>
using namespace std;



int main(){

    Database data;

    Place p1("ANKARA SANAT EVİ",Place::PLACE_THEATRE,250, "Kızılay/ANKARA");
    data.addPlace(p1);
    Event e1("1","Anatolia","konser","11/05/2016",1000);
    data.addEvent(e1);
    return 0;

}

