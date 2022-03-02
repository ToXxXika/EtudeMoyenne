//
// Created by mabro on 1/26/2022.
//

#ifndef ETUDEMOYENNE_GROUPE_H
#define ETUDEMOYENNE_GROUPE_H
#include "string"
#include "GroupleModule.h"
#include "Etudiant.h"
#include "vector"
using namespace std;
class Groupe {
    string IdGRP;
    string Niveau;
    string Diplome;
    string specialité;
    int Num_G;
    vector<GroupeModule> ListeModule;
    vector<Etudiant> ListeEtudiants;

public:
    Groupe(const string &idGrp, const string &niveau, const string &diplome, const string &specialité, int numG,
           const vector<GroupeModule> &listeModule, const vector<Etudiant> &listeEtudiants);

    Groupe();
};
#endif //ETUDEMOYENNE_GROUPE_H
