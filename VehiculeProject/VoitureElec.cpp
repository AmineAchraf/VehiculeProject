#include "VoitureElec.h"
#include <iostream>
using namespace std;

int VoitureElec::nbElec = 0;

VoitureElec::VoitureElec(string m, int q, int n) : Voiture(m, q) {
    niveauBatterie = n;
    nbElec++;
}

VoitureElec::~VoitureElec() {
    nbElec--;
    cout << "Destruction VoitureElec : " << marque << endl;
}

void VoitureElec::afficher() {
    Voiture::afficher();
    cout << "  Niveau batterie : " << niveauBatterie << " %" << endl;
}

void VoitureElec::afficherNombre() {
    cout << "Nombre de voitures electriques : " << nbElec << endl;
}