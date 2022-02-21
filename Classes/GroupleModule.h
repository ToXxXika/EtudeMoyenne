//
// Created by mabro on 2/21/2022.
//

#ifndef ETUDEMOYENNE_GROUPLEMODULE_H
#define ETUDEMOYENNE_GROUPLEMODULE_H

#include "string"
#include "Matiere.h"
using namespace std;
class GroupeModule{
public:
    string idGM;
    string NomGM;
    float CoefGM;
    Matiere ListMat[50];

    GroupeModule(const string &idGm, const string &nomGm, float coefGm, Matiere *listMat);

    GroupeModule();

public:
    const string &getIdGm() const;

    void setIdGm(const string &idGm);

    const string &getNomGm() const;

    void setNomGm(const string &nomGm);

    float getCoefGm() const;

    void setCoefGm(float coefGm);

    const Matiere *getListMat() const;
};
#endif //ETUDEMOYENNE_GROUPLEMODULE_H
