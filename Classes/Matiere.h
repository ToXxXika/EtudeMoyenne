//
// Created by mabro on 3/2/2022.
//

#ifndef ETUDEMOYENNE_MATIERE_H
#define ETUDEMOYENNE_MATIERE_H

#include <vector>
#include "string"
#include "Enseignant.h"

using namespace std ;
class Matiere{
public:
   string idMat;
    float Coef ;
   Enseignant Ens ;
    string NomMat ;
public:
    Matiere(const string &idMat, const string &nomMat, float coef, const Enseignant &ens);

    void AjouterMatiere(vector<Enseignant> LL);

    Matiere();

};
#endif //ETUDEMOYENNE_MATIERE_H
