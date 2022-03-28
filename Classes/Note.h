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
     struct GmEtudiant{
         int IdEtd;
         float MoyGM;
         string NomGM ;
         float coefGM ;
         vector<string> MatNom;
     };
     Note(const Matiere &mat, const Etudiant &etu, float note, const string &type);
  void MoyenneMatiere(vector<Note> Ln,vector<Etudiant>& ListEtd,vector<Matiere>& ListMat,ofstream & MyFile);
  void AjouterNote(Matiere M,int id,vector<Note>& ListNote,vector<Etudiant>& ListEtd);
  void MoyenneGM(GroupeModule GM,int id,vector<Matiere> ListMat,vector<GmEtudiant>& ListCustom);
  float MoyenneGenerale(vector<GmEtudiant>& LsGM,int id);
  string getId(string line);
  string getPren(string line);
  string getMatiere(string line);
  string getMoy(string line);

     const Matiere &getMat() const;

     const Etudiant &getEtu() const;

     float getNote() const;

     const string &getType() const;

     Note();


 };