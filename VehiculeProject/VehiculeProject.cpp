#include <iostream>
#include "VoitureElec.h"
using namespace std;

int main() {
    Vehicule v1("ferrari");
    Voiture v2("Renault", 40);
    VoitureElec v3("Tesla", 0, 80);

    cout << "Mes vehicules :" << endl;
    v1.afficher();
    v2.afficher();
    v3.afficher();

    cout << endl;
    Vehicule::afficherNombre();
    Voiture::afficherNombre();
    VoitureElec::afficherNombre();

    cout << endl << "Debut du bloc" << endl;
        Voiture v4("Dacia", 25);
        Vehicule::afficherNombre();
    cout << "Fin du bloc" << endl;
    Vehicule::afficherNombre();

    cout << endl << "Fin du programme" << endl;
    return 0;
}