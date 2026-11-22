#include "Vehicule.h"

class Voiture : public Vehicule {
protected:
    int quantiteEssence;
    static int nbVoitures;   

public:
    Voiture(string m, int q);
    ~Voiture();

    void afficher();
    static void afficherNombre();
};