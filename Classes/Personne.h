//
// Created by mabro on 1/26/2022.
//

#ifndef ETUDEMOYENNE_PERSONNE_H
#define ETUDEMOYENNE_PERSONNE_H
#include "string";
using namespace std;
class  Personne {

public:
    Personne();

public:
    Personne(int id, const string &nom, const string &prenom, const string &mail);

protected:
    int id ;
    string Nom ;
    string Prenom;
    string mail ;


public:
    int getId() const;

    void setId(int id);

    const string &getNom() const;

    void setNom(const string &nom);

    const string &getPrenom() const;

    void setPrenom(const string &prenom);

    const string &getMail() const;

    void setMail(const string &mail);

};



#endif //ETUDEMOYENNE_PERSONNE_H
