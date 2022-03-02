#include <iostream>
#include <vector>
#include "Classes/Enseignant.h"
#include "Classes/Etudiant.h"
#include "Classes/Note.h"

int main() {

    Etudiant E(1,"Oussema","Mabrouki","GGG",2) ;
    Enseignant Ens(1,"Ahmed","Ahmed","GGG",2555);
    Matiere M("1","Allemand",1,Ens);
    Note N1;
    vector<Note> Ln ;
    for(int i=0;i<3;i++){
        Note N ;
        N.AjouterNote(M);
        Ln.push_back(N);
    }
    N1.MoyenneMatiere(Ln,E);
    return 0;
}
