#include <iostream>
#include <vector>
#include "Classes/Enseignant.h"
#include "Classes/Etudiant.h"
#include "Classes/Note.h"
int main() {
   vector<Etudiant> ListEtd;
   vector<Enseignant> ListEns;
   vector<Matiere> ListMat;
   cout<<"Donner le nombre d'etudiants"<<endl;
    int x =0;
    cin>>x;
    for(int j=0;j<x;j++){
        Etudiant E ;
        E.AjouterEtudiant();
        cout<<"**************"<<endl;
        ListEtd.push_back(E);
    }

    cout<<"Donner le nombre d Enseignants"<<endl;
    int x1 =0;
    cin>>x1;
    for(int j1=0;j1<x1;j1++){
        Enseignant E ;
        E.AjouterEnseignant();
        cout<<"**************"<<endl;
        ListEns.push_back(E);
    }
    cout<<"Ajouter les Matieres"<<endl;
    int x2=0;
    cout<<"Donner le nombre de matiere a ajouter"<<endl;
    cin>>x2;
    for(int j2=0;j2<x2;j2++){
        Matiere M ;
        M.AjouterMatiere(ListEns);
        ListMat.push_back(M);
    }
    cout<<"Calcul du Moyenne du matiere"<<endl;
    Note N1;
    vector<Note> Ln ;
    cout<<"Donner le nombre du Note associé"<<endl;
    int nbrNote;
    cin>>nbrNote;
    cout<<"Donner id Etudiant"<<endl;
    int idEtd;
    cin>>idEtd;
    for(int i=0;i<nbrNote;i++){
        Note N ;
        N.AjouterNote(ListMat,idEtd,ListEtd);
        Ln.push_back(N);
    }
    N1.MoyenneMatiere(Ln);

    return 0;
}
