//
// Created by mabro on 1/26/2022.
//

#ifndef ETUDEMOYENNE_MATIERE_H
#define ETUDEMOYENNE_MATIERE_H

#include "string";
#include "Personne.h"
#include "Enseignant.h"
#include "iostream"
using namespace std;

class Matiere  {
  string idMat;
  string NomMat;
  float Coef ;
  Enseignant Ens;
public:
    Matiere(const string &idMat, const string &nomMat, float coef, const Enseignant &ens);

    Matiere();
    void AjouterMatiere();
    friend ostream& operator<<(ostream& out ,const Matiere& Mat);

};


#endif //ETUDEMOYENNE_MATIERE_H
