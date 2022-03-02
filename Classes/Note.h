//
// Created by mabro on 1/26/2022.
//

#ifndef ETUDEMOYENNE_NOTE_H
#define ETUDEMOYENNE_NOTE_H


#include "Matiere.h"
#include "Etudiant.h"
#include "string"
using namespace std ;
class Note {
     Matiere Mat ;
     Etudiant Etu ;
     float note ;
     string Type ;
public:
    Note(const Matiere &mat, const Etudiant &etu, float note, const string &type);

    Note();
};


#endif //ETUDEMOYENNE_NOTE_H
