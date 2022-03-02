//
// Created by mabro on 3/2/2022.
//

#include "Matiere.h"
#include "Etudiant.h"

#ifndef ETUDEMOYENNE_NOTE_H
#define ETUDEMOYENNE_NOTE_H

#endif //ETUDEMOYENNE_NOTE_H
 class Note{
 protected:
   Matiere mat ;
   Etudiant etu ;
   float note ;
   string type ;
 public:
     Note(const Matiere &mat, const Etudiant &etu, float note, const string &type);
  void MoyenneMatiere(vector<Note> Ln,Etudiant Et);
  void AjouterNote(Matiere M);

     Note();
 };