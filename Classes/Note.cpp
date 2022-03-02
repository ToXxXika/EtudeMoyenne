//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "Note.h"

Note::Note(const Matiere &mat, const Etudiant &etu, float note, const string &type) : mat(mat), etu(etu), note(note),
                                                                                      type(type) {}

void Note::MoyenneMatiere(vector<Note> Ln, Etudiant Et) {
    float Notes =0 ;
    for(auto x: Ln){
        Notes+=x.note;
    }
   float moyenne =0;
    moyenne=Notes/Ln.size();
    cout<<"La Moyenne de Cet Etudiant"<<Et.getNom()<<" "<<Et.getPrenom()<<"dans cette matiere"<<Ln.begin()->mat.NomMat<<"est"<<moyenne;


}
//TODO: Ajouter le nombre de note (instead) of 3
void Note::AjouterNote(Matiere M) {
    this->mat=M;
    cout<<"Donner le Type de note"<<endl;
    cin>>this->type;
    cout<<"Donner la Note du"<<this->type<<endl;
    cin>>this->note;


}

Note::Note() {}
