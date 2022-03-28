//
// Created by mabro on 2/21/2022.
//

#ifndef ETUDEMOYENNE_ENSEIGNANT_H
#define ETUDEMOYENNE_ENSEIGNANT_H

#include "Personne.h"
#include "vector"
class Enseignant: public Personne{

    int CNSS ;
public:
    Enseignant(int id, const string &nom, const string &prenom, const string &mail, int cnss);

    int getCnss() const;

    Enseignant();
    void AjouterEnseignant();
    void SupprimerEnseignant(vector<Enseignant>& ListEns,int cnss);
};
#endif //ETUDEMOYENNE_ENSEIGNANT_H
