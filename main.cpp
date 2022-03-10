#include <iostream>
#include <vector>
#include "Classes/Enseignant.h"
#include "Classes/Etudiant.h"
#include "Classes/Note.h"
#include "fstream"
void Menu(){
}
int main() {

   vector<Etudiant> ListEtd;
   vector<Enseignant> ListEns;
   vector<Matiere> ListMat;
   vector<Note> ListNote;
   ofstream MyFile ("C:\\Users\\mabro\\Desktop\\Moyenne.txt",ios::app);
   vector<Note::GmEtudiant> ListCustom ;
   vector<GroupeModule> ListGRP ;
   //ios:: ate is used to set the initial position at the end of the file
   // if this flag is not set , the initial position is the beginning of the file
  Etudiant A1(5,"Rami","Bejaoui","aaa",2100);
  Etudiant A2(6,"Oussema","Mabrouki","aaa",2100);
  //Etudiant A3(7,"Ahmed","Ahmed","aaa",2100);
  ListEtd.push_back(A1);
  ListEtd.push_back(A2);
  //ListEtd.push_back(A3);
  Enseignant E1(10,"Hechmi","Abdelmoumen","abcd",2500);
  Enseignant E2(11,"Hamrouni","Tarek","abcde",2501);
  ListEns.push_back(E1);
  ListEns.push_back(E2);
  Matiere M("15","theorie",3,E1);
  Matiere M2("16","tla",4,E2);
  Matiere M3("17","Math",5,E2);
  Matiere M4("18","Algo",2,E2);
  ListMat.push_back(M);
  ListMat.push_back(M2);
  ListMat.push_back(M3);
  ListMat.push_back(M4);
 /* cout<<"Calcul du note pour les Etudiants du faculté"<<endl;
  Note NN;
   for(int i=0;i<ListEtd.size();i++){
       for(int j=0;j<ListMat.size();j++){
           NN.AjouterNote(ListMat.at(j),ListEtd.at(i).getId(),ListNote,ListEtd);
       }

   }
   NN.MoyenneMatiere(ListNote,ListEtd,ListMat,MyFile);*/
   //***************** Remplir GroupeModule **********//
   cout<<"Donner le nombre de module a ajouter "<<endl;
   int x3=0;
   cin>>x3;
   for(int j3=0;j3<x3;j3++){
       GroupeModule GM ;
       GM.AjouterGroupeModule(ListMat);
       ListGRP.push_back(GM);
   }
 Note N ;
  for(auto etd:ListEtd){
      for(auto GM: ListGRP){
          N.MoyenneGM(GM,etd.getId(),ListMat,ListCustom);
      }
  }
  string data ;
  /*************** Affichage Pv ************/
    ifstream MyFile2 ("C:\\Users\\mabro\\Desktop\\Moyenne.txt",ios::app);
  string moy="";
    for(auto x: ListEtd){
       for(int i=0;i<ListCustom.size();i++){
           if(x.getId()==ListCustom.at(i).IdEtd){
               cout<<"*****"<<"Groupe Module Nom :"<<ListCustom.at(i).NomGM<<endl;
               cout<<"*****"<<"CoefficientGM :"<<ListCustom.at(i).coefGM<<endl;
               cout<<""<<x.getNumInsc()<<"/"<<x.getNom()<<"/"<<x.getPrenom();
               while(getline(MyFile2,data)){
                   for(auto M: ListCustom.at(i).MatNom){
                     Note N ;
                     Matiere MM;
                     string Mat =N.getMatiere(data);
                     int idFile = stoi(N.getId(data));
                      if(idFile==x.getId()){
                          if(M==Mat){
                              cout<<"***********Matiere "<<M<<endl;
                              cout<<"***********Coefficient Matiere: "<<MM.getCoefMatiere(ListMat,M)<<endl;
                              moy=N.getMoy(data);
                              cout<<"***********Moyenne Matiere: "<<moy<<endl;
                          }
                      }
                 }

               }
               MyFile2.clear();
               MyFile2.seekg(0);
           }
       }
   }

    return 0;
}
