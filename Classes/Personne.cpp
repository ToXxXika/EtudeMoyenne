//
// Created by mabro on 1/26/2022.
//

#include "Personne.h"

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

Personne::Personne(int id, const string &nom, const string &prenom, const string &mail) : id(id), Nom(nom),
                                                                                          Prenom(prenom), mail(mail) {}

Personne::Personne() {}
