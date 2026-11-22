#include <string>
using namespace std;

class Vehicule {
protected:
    string marque;
    static int nbVehicules;   // nombre de vehicules existants

public:
    Vehicule(string m);
    virtual ~Vehicule();

    virtual void afficher();
    static void afficherNombre();
};
