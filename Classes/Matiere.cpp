//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "Matiere.h"

Matiere::Matiere(const string &idMat, const string &nomMat, float coef, const Enseignant &ens) : idMat(idMat),
                                                                                                 NomMat(nomMat),
                                                                                                 Coef(coef), Ens(ens) {}

void Matiere::AjouterMatiere() {
    cout<<"Donner Id Matiere"<<endl;
    cin>>this->idMat;
    cout<<"Donner Nom Matiere"<<endl;
    cin>>this->NomMat;
    cout<<"Donner Coefficient du Matiere "<<endl;
    cin>>this->Coef;
    cout<<"Attribuer L'Enseignant"<<endl ;
    Enseignant E ;
    E.AjouterEnseignant();
    this->Ens=E;
    cout<<"*********** Ajout terminée **********"<<endl;

}

Matiere::Matiere() {}
