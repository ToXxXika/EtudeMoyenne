//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "GroupeModule.h"

GroupeModule::GroupeModule(const string &idGm, const string &nomGm, float coefGm, const vector<Matiere> &listeMat)
        : IdGM(idGm), NomGM(nomGm), CoefGM(coefGm), ListeMat(listeMat) {}

GroupeModule::GroupeModule() {}

void GroupeModule::AjouterGroupeModule(vector<Matiere>LstMat) {
  cout<<"Donner Id du Groupe Module"<<endl;
  cin>>this->IdGM;
  cout<<"Donner Nom du Groupe Module"<<endl;
  cin>>this->NomGM;

  cout<<"Remplir la Liste des matieres "<<endl;
  cout<<"*****************************"<<endl;
  int nbrMatieres=0;
  cout<<"Combien du matieres dans le GroupeModule"<<endl;
  cin>>nbrMatieres;
  vector<Matiere> ListMat;
  string mat;
  int coef ;
     for(int i=0;i<nbrMatieres;i++){
         cout<<"Donner le nom du matiere pour l'ajouter dans groupe module"<<endl ;
         cin>>mat;
         for(auto x : LstMat){
             if(x.getNomMat()==mat){
                 ListMat.push_back(x);
                 coef=x.getCoef();
                 this->CoefGM+=coef;
                 break ;
             }
         }
     }
     cout<<"La coefficient de ce module est "<<this->CoefGM<<endl;
  this->ListeMat=ListMat;
}
