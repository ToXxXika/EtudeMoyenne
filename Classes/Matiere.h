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
protected:
   string idMat;
    float Coef ;
   Enseignant Ens ;

public:
    const string &getIdMat() const;

    float getCoef() const;

    const string &getNomMat() const;


    string NomMat ;
public:
    Matiere(const string &idMat, const string &nomMat, float coef, const Enseignant &ens);

    void AjouterMatiere(vector<Enseignant> LL);

    int getCoefMatiere(vector<Matiere>,string M);
    Matiere();
    void SupprimerMatiere(vector<Matiere>& LSt,string nomMat);

};
#endif //ETUDEMOYENNE_MATIERE_H
