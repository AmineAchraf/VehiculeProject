#include "Vehicule.h"
#include <iostream>
using namespace std;

int Vehicule::nbVehicules = 0;

Vehicule::Vehicule(string m) {
    marque = m;
    nbVehicules++;
}

Vehicule::~Vehicule() {
    nbVehicules--;
    cout << "Destruction Vehicule : " << marque << endl;
}

void Vehicule::afficher() {
    cout << "Vehicule : " << marque << endl;
}

void Vehicule::afficherNombre() {
    cout << "Nombre de vehicules : " << nbVehicules << endl;
}
