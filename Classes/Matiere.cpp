//
// Created by mabro on 1/26/2022.
//

#include "Matiere.h"
#include "Enseignant.h"
Matiere::Matiere(const string &idMat, const string &nomMat, float coef, const Enseignant &ens) : idMat(idMat),
                                                                                                 NomMat(nomMat),
                                                                                                 Coef(coef), Ens(ens) {}

Matiere::Matiere() {}

void Matiere::AjouterMatiere() {
    cout<<"Donner Id Matiere"<<endl;
    cin>>this->idMat;
    cout<<"Donner Nom Matiere"<<endl ;
    cin>>this->NomMat;
    cout<<"Donner Coef Matiere"<<endl;
    cin>> this->Coef;
    cout<<"Associer un Enseignant"<<endl;
    Enseignant E ;
    E.AjouterEnseignant();
}

ostream &operator<<(ostream &out,const Matiere& Mat) {
    out<<"IdMatiere"<<Mat.idMat<<"NomMatiere"<<Mat.NomMat<<"Coef"<<Mat.Coef<<"Enseignant"<<Mat.Ens.getNom()<<Mat.Ens.getPrenom()<<endl;
}
