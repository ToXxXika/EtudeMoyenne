//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "Matiere.h"

Matiere::Matiere(const string &idMat, const string &nomMat, float coef, const Enseignant &ens) : idMat(idMat),
                                                                                                 NomMat(nomMat),
                                                                                                 Coef(coef), Ens(ens) {}

void Matiere::AjouterMatiere(vector<Enseignant> LL) {
    string nomEns ;
    bool res=false ;
    bool i =false ;
     while(i==res){
         cout<<"Donner le nom d'enseignant"<<endl;
         cin>>nomEns;
         for (auto x: LL) {
             if (nomEns==x.getNom()) {
                 this->Ens = x;
                 cout<<"Donner Id Matiere"<<endl;
                 cin>>this->idMat;
                 cout<<"Donner Nom Matiere"<<endl;
                 cin>>this->NomMat;
                 cout<<"Donner Coefficient du Matiere "<<endl;
                 cin>>this->Coef;
                 res = true;
                 break;
             }
         }
     }
}

Matiere::Matiere() {}

const string &Matiere::getIdMat() const {
    return idMat;
}

float Matiere::getCoef() const {
    return Coef;
}

const string &Matiere::getNomMat() const {
    return NomMat;
}

int Matiere::getCoefMatiere(vector<Matiere> LsMat, string M) {
    for(auto Mat:LsMat){
        if(Mat.NomMat==M);
        return Mat.Coef;
    }
}

void Matiere::SupprimerMatiere(vector<Matiere>& Lst, int nomMat) {
   for(int i=0;i<Lst.size();i++){
       if(stoi(Lst.at(i).idMat)==nomMat){
           Lst.erase(Lst.begin()+i-1);
       }
   }
}
