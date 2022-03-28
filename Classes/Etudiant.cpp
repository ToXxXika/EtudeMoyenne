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

Etudiant Etudiant::GetEtudiantByList(vector<Etudiant> &ListEtd, int id) {
    int i=0;
    while(i<ListEtd.size()){
        if(ListEtd.at(i).getId()==id){
            return ListEtd.at(i);
            break;
        } else{
            i++;
        }
    }

}

void Etudiant::SupprimerEtudiant(vector<Etudiant>& ListEtd, int id) {
    for(int i=0;i<ListEtd.size();i++){
        cout<<"ListEtd :"<<ListEtd.at(i).getId();
        if(id==ListEtd.at(i).getId()){
           ListEtd.erase(ListEtd.begin()+i);
           cout<<"Etudiant supprimé de la liste"<<endl ;
        }
    }

}

void Etudiant::ModifierEtudiant(vector<Etudiant> &ListEtd, int id) {
      for(auto x : ListEtd){
          if(id==x.getId()){
              cout<<"Etudiant trouvé"<<endl ;
              string mail ;
              string prenom ;
              string nom ;
              cout<<"Donner nouveau Mail"<<endl;
              cin>>mail ;
              cout<<"Donner nouveau prenom"<<endl;
              cin>>prenom;
              cout<<"Donner nouveau nom"<<endl;
              cin>>nom ;
              x.setMail(mail);
              x.setNom(nom);
              x.setPrenom(prenom);
              cout<<"Mise a jour terminee"<<endl ;
          }
      }
}
