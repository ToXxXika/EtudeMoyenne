//
// Created by mabro on 3/2/2022.
//

#ifndef ETUDEMOYENNE_GROUPEMODULE_H
#define ETUDEMOYENNE_GROUPEMODULE_H

#include <vector>
#include "string"
#include "Matiere.h"

using namespace std ;
#endif //ETUDEMOYENNE_GROUPEMODULE_H
class GroupeModule{
public:
    string IdGM ;
    string NomGM ;
    float CoefGM ;
    vector<Matiere> ListeMat ;
public:
    GroupeModule(const string &idGm, const string &nomGm, float coefGm, const vector<Matiere> &listeMat);

    GroupeModule();
    void AjouterGroupeModule();
};