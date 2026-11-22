#include "Voiture.h"

class VoitureElec : public Voiture {
private:
    int niveauBatterie;
    static int nbElec;   // nombre de voitures electriques existantes

public:
    VoitureElec(string m, int q, int n);
    ~VoitureElec();

    void afficher();
    static void afficherNombre();
};