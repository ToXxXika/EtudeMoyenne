//
// Created by mabro on 3/1/2022.
//
#include "stdio.h"
#ifndef ETUDEMOYENNE_DATABASE_H
#define ETUDEMOYENNE_DATABASE_H
#include "sqlite3.h"
#include "string"
using namespace std ;
class Connection {
public:
  sqlite3* DB ;
  const char* dir = "c:\\users\\mabro\\Desktop\\Moyenne.db";
  static void CreateDb(const char* s);
    static int createTable(const char* s);
};

void Connection::CreateDb(const char *s) {
    sqlite3* DB ;
    int exit =0 ;
    exit = sqlite3_open(s,&DB);
    if(exit){
        fprintf(stderr,"erreur dans la base de données %s\n", sqlite3_errmsg(DB));
    }else{
        fprintf(stderr,"Connexion a la base de données :D");
    }
    sqlite3_close(DB);
}

int Connection::createTable(const char *s) {
    sqlite3* DB ;
    string sql = "CREATE TABLE IF NOT EXISTS personne(";
}


#endif //ETUDEMOYENNE_DATABASE_H
