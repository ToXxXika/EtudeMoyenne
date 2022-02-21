//
// Created by mabro on 2/21/2022.
//

#include "GroupleModule.h"

const string &GroupeModule::getIdGm() const {
    return idGM;
}

void GroupeModule::setIdGm(const string &idGm) {
    idGM = idGm;
}

const string &GroupeModule::getNomGm() const {
    return NomGM;
}

void GroupeModule::setNomGm(const string &nomGm) {
    NomGM = nomGm;
}

float GroupeModule::getCoefGm() const {
    return CoefGM;
}

void GroupeModule::setCoefGm(float coefGm) {
    CoefGM = coefGm;
}

const Matiere *GroupeModule::getListMat() const {
    return ListMat;
}

GroupeModule::GroupeModule() {}

GroupeModule::GroupeModule(const string &idGm, const string &nomGm, float coefGm, Matiere *listMat) : idGM(idGm),
                                                                                                      NomGM(nomGm),
                                                                                                      CoefGM(coefGm),
                                                                                                      ListMat(listMat) {}
