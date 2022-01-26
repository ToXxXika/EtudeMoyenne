//
// Created by mabro on 1/26/2022.
//

#ifndef ETUDEMOYENNE_MATIERE_H
#define ETUDEMOYENNE_MATIERE_H

#include "string";
#include "Personne.h"

using namespace std;

class Matiere  {
  string idMat;
  string NomMat;
  float Coef ;
  Enseignant Ens;

public:
    Matiere(const string &idMat, const string &nomMat, float coef, const Enseignant &ens) :
    idMat(idMat),
    NomMat(nomMat), Coef(coef),
    Ens(ens) {}

    const string &getIdMat() const {
        return idMat;
    }

    void setIdMat(const string &idMat) {
        Matiere::idMat = idMat;
    }

    const string &getNomMat() const {
        return NomMat;
    }

    void setNomMat(const string &nomMat) {
        NomMat = nomMat;
    }

    float getCoef() const {
        return Coef;
    }

    void setCoef(float coef) {
        Coef = coef;
    }

    const Enseignant &getEns() const {
        return Ens;
    }

    void setEns(const Enseignant &ens) {
        Ens = ens;
    }
};


#endif //ETUDEMOYENNE_MATIERE_H
