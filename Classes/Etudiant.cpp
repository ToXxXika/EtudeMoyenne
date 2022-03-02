//
// Created by mabro on 2/21/2022.
//

#include "Etudiant.h"


Etudiant::Etudiant(int id, const string &nom, const string &prenom, const string &mail, int numInsc) : Personne(id, nom,
                                                                                                                prenom,
                                                                                                                mail),
                                                                                                       Num_insc(
                                                                                                               numInsc) {}

Etudiant::Etudiant() {}
