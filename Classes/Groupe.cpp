//
// Created by mabro on 1/26/2022.
//

#include "Groupe.h"

Groupe::Groupe(const string &idGrp, const string &niveau, const string &diplome, const string &specialité, int numG,
               const vector<GroupeModule> &listeModule, const vector<Etudiant> &listeEtudiants) : IdGRP(idGrp),
                                                                                                  Niveau(niveau),
                                                                                                  Diplome(diplome),
                                                                                                  specialité(
                                                                                                          specialité),
                                                                                                  Num_G(numG),
                                                                                                  ListeModule(
                                                                                                          listeModule),
                                                                                                  ListeEtudiants(
                                                                                                          listeEtudiants) {}

Groupe::Groupe() {}
