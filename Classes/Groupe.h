//
// Created by mabro on 1/26/2022.
//

#ifndef ETUDEMOYENNE_GROUPE_H
#define ETUDEMOYENNE_GROUPE_H
#include "string"
#include "GroupleModule.h"
#include "Etudiant.h"
using namespace std;
class Groupe {
   string IdGRP;
   string Niveau;
   string Diplome;
   string specialité;
   int Num_G;
   GroupeModule ListeModule[];
   Etudiant ListeEtudiants[];
public:
    Groupe(const string &idGrp, const string &niveau, const string &diplome, const string &specialité, int numG,
           GroupeModule *listeModule, Etudiant *listeEtudiants);




#endif //ETUDEMOYENNE_GROUPE_H
