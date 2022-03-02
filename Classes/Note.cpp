//
// Created by mabro on 1/26/2022.
//

#include "Note.h"

Note::Note(const Matiere &mat, const Etudiant &etu, float note, const string &type) : Mat(mat), Etu(etu), note(note),
                                                                                      Type(type) {}

Note::Note() {}
