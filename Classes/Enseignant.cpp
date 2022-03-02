//
// Created by mabro on 2/21/2022.
//

#include <iostream>
#include "Enseignant.h"
using namespace std;
Enseignant::Enseignant(int id, const string &nom, const string &prenom, const string &mail, int cnss) : Personne(id,
                                                                                                                 nom,
                                                                                                                 prenom,
                                                                                                                 mail),
                                                                                                        CNSS(cnss) {}

Enseignant::Enseignant() {}

void Enseignant::AjouterEnseignant() {
    cout<<"Donner id Enseignant"<<endl;
    cin>>this->id;
    cout<<"Donner Nom Enseignant"<<endl;
    cin>>this->Nom;
    cout<<"Donner Prenom Enseignant"<<endl;
    cin>>this->Prenom;
    cout<<"Donner Mail Professionel"<<endl;
    cin>>this->mail;
    cout<<"Donner le CNSS"<<endl;
    cin>>this->CNSS;

}
