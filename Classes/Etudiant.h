//
// Created by mabro on 2/21/2022.
//

#ifndef ETUDEMOYENNE_ETUDIANT_H
#define ETUDEMOYENNE_ETUDIANT_H
#include "Personne.h"
class Etudiant: public Personne{
protected:
    int Num_insc ;
public:
    Etudiant(int id, const string &nom, const string &prenom, const string &mail, int numInsc);

    int getNumInsc() const;

    void setNumInsc(int numInsc);

    void AjouterEtudiant();
    Etudiant();
};
#endif //ETUDEMOYENNE_ETUDIANT_H
