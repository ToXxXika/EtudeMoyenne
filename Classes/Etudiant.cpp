//
// Created by mabro on 2/21/2022.
//

#include <iostream>
#include "Etudiant.h"


Etudiant::Etudiant(int id, const string &nom, const string &prenom, const string &mail, int numInsc) : Personne(id, nom,
                                                                                                                prenom,
                                                                                                                mail),
                                                                                                       Num_insc(
                                                                                                               numInsc) {}

Etudiant::Etudiant() {}

void Etudiant::AjouterEtudiant() {
    cout<<"Donner id Etudiant"<<endl;
    cin>>this->id;
    cout<<"Donner Nom Etudiant"<<endl;
    cin>>this->Nom;
    cout<<"Donner Prenom Etudiant"<<endl;
    cin>>this->Prenom;
    cout<<"Donner Mail "<<endl;
    cin>>this->mail;
    cout<<"Donner Num_Ins"<<endl;
    cin>>this->Num_insc;
}

int Etudiant::getNumInsc() const {
    return Num_insc;
}

void Etudiant::setNumInsc(int numInsc) {
    Num_insc = numInsc;
}
