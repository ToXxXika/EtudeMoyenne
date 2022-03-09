//
// Created by mabro on 3/2/2022.
//

#include "Matiere.h"
#include "Etudiant.h"
#include "GroupeModule.h"

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
  void MoyenneMatiere(vector<Note> Ln,ofstream & MyFile);
  void AjouterNote(vector<Matiere> M,int id,vector<Etudiant> LsEtd);
  void MoyenneGM(GroupeModule GM,int id,vector<Matiere> ListMat);
  string getId(string line);
  string getPren(string line);
  string getMatiere(string line);
  string getMoy(string line);

     Note();


 };