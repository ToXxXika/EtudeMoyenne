//
// Created by mabro on 2/21/2022.
//

#ifndef ETUDEMOYENNE_ENSEIGNANT_H
#define ETUDEMOYENNE_ENSEIGNANT_H

#include "Personne.h"

class Enseignant: public Personne{

    int CNSS ;
public:
    Enseignant(int id, const string &nom, const string &prenom, const string &mail, int cnss);

    Enseignant();
    void AjouterEnseignant();
};
#endif //ETUDEMOYENNE_ENSEIGNANT_H
