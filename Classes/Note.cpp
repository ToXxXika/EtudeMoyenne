//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "Note.h"

Note::Note(const Matiere &mat, const Etudiant &etu, float note, const string &type) : mat(mat), etu(etu), note(note),
                                                                                      type(type) {}

void Note::MoyenneMatiere(vector<Note> Ln) {
    float Notes =0 ;
    for(auto x: Ln){
        Notes+=x.note;
    }
   float moyenne =0;
    moyenne=Notes/Ln.size();
    cout<<"La Moyenne de Cet Etudiant"<<Ln.begin()->etu.getNom()<<" "<<Ln.begin()->etu.getPrenom()<<" dans cette matiere"<<Ln.begin()->mat.NomMat<<" est"<<moyenne;
}
//TODO: Ajouter le nombre de note (instead) of 3
void Note::AjouterNote(vector<Matiere> M,int id,vector<Etudiant> LsEtd) {
     bool res =false;
     bool i  = true ;
     while (i!=res) {
        for(auto i: LsEtd){
            if(i.getId()==id){
                this->etu=i;
                cout<<"Donner le nom du la matiere"<<endl;
                string nomMat ;
                cin>>nomMat;
                for (auto x: M) {
                    if (x.NomMat == nomMat) {
                        cout << "Donner le Type de note" << endl;
                        cin >> this->type;
                        cout << "Donner la Note du" << this->type << endl;
                        cin >> this->note;
                        //TODO : Liste Etudiants
                        res= true ;
                    }
                }
            }else{
                cout<<"Etudiant non trouvable"<<endl ;
            }
        }

    }


}

Note::Note() {}

void Note::MoyenneGM(Matiere M, GroupeModule GM) {


}
