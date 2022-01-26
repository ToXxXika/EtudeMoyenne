//
// Created by mabro on 1/26/2022.
//

#ifndef ETUDEMOYENNE_PERSONNE_H
#define ETUDEMOYENNE_PERSONNE_H
#include "string";
using namespace std;
class  Personne {
public:
    Personne(int id, const string &nom, const string &prenom, const string &mail);

    int getId() const;

    void setId(int id);

    const string &getNom() const;

    void setNom(const string &nom);

    const string &getPrenom() const;

    void setPrenom(const string &prenom);

    const string &getMail() const;

    void setMail(const string &mail);

private:
    int id ;
    string Nom ;
    string Prenom;
    string mail ;

};
class Enseignant : Personne{
public:
    Enseignant(int id, const string &nom, const string &prenom, const string &mail, int cnss);

private:
    int CNSS ;
};
class Etudiant : Personne{
public:
    Etudiant(int id, const string &nom, const string &prenom, const string &mail, int numInsc);

    int getNumInsc() const;

    void setNumInsc(int numInsc);

private:
    int Num_insc;
};

Personne::Personne(int id, const string &nom, const string &prenom, const string &mail) : id(id), Nom(nom),
                                                                                          Prenom(prenom), mail(mail) {}

Enseignant::Enseignant(int id, const string &nom, const string &prenom, const string &mail, int cnss) : Personne(id,
                                                                                                                 nom,
                                                                                                                 prenom,
                                                                                                                 mail),
                                                                                                        CNSS(cnss) {}

Etudiant::Etudiant(int id, const string &nom, const string &prenom, const string &mail, int numInsc) : Personne(id, nom,
                                                                                                                prenom,
                                                                                                                mail),
                                                                                                       Num_insc(
                                                                                                               numInsc) {}

int Etudiant::getNumInsc() const {
    return Num_insc;
}


void Etudiant::setNumInsc(int numInsc) {
    Num_insc = numInsc;
}

int Personne::getId() const {
    return id;
}

void Personne::setId(int id) {
    Personne::id = id;
}

const string &Personne::getNom() const {
    return Nom;
}

void Personne::setNom(const string &nom) {
    Nom = nom;
}

const string &Personne::getPrenom() const {
    return Prenom;
}

void Personne::setPrenom(const string &prenom) {
    Prenom = prenom;
}

const string &Personne::getMail() const {
    return mail;
}

void Personne::setMail(const string &mail) {
    Personne::mail = mail;
}

#endif //ETUDEMOYENNE_PERSONNE_H
