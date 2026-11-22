#include "Voiture.h"
#include <iostream>
using namespace std;

int Voiture::nbVoitures = 0;

Voiture::Voiture(string m, int q) : Vehicule(m) {
    quantiteEssence = q;
    nbVoitures++;
}

Voiture::~Voiture() {
    nbVoitures--;
    cout << "Destruction Voiture : " << marque << endl;
}

void Voiture::afficher() {
    Vehicule::afficher();
    cout << "  Quantite essence : " << quantiteEssence << " L" << endl;
}

void Voiture::afficherNombre() {
    cout << "Nombre de voitures : " << nbVoitures << endl;
}
