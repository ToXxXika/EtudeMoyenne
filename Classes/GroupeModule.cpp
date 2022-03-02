//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "GroupeModule.h"

GroupeModule::GroupeModule(const string &idGm, const string &nomGm, float coefGm, const vector<Matiere> &listeMat)
        : IdGM(idGm), NomGM(nomGm), CoefGM(coefGm), ListeMat(listeMat) {}

GroupeModule::GroupeModule() {}

void GroupeModule::AjouterGroupeModule() {
  cout<<"Donner Id du Groupe Module"<<endl;
  cin>>this->IdGM;
  cout<<"Donner Nom du Groupe Module"<<endl;
  cin>>this->NomGM;
  cout<<"Donner Coef du Groupe Module"<<endl;
  cin>>this->CoefGM;
  cout<<"Remplir la Liste des matieres "<<endl;
  cout<<"*****************************"<<endl;
  int nbrMatieres=0;
  cout<<"Combien du matieres dans le GroupeModule"<<endl;
  cin>>nbrMatieres;
  vector<Matiere> ListMat;
  for(int i=0;i<nbrMatieres;i++){
       Matiere M ;
      // M.AjouterMatiere();
       ListMat.push_back(M);
  }
  this->ListeMat=ListMat;
}
