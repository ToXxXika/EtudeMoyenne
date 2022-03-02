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
  sqlite3* DB ;
  const char* dir = "c:\\\\Moyenne.db";
  static int CreateDb(const char* s);
    static int createTable(const char* s);
};

int Connection::CreateDb(const char *s) {
    sqlite3* DB ;
    int exit =0 ;
    exit = sqlite3_open(s,&DB);
    sqlite3_close(DB);
    return 0;
}

int Connection::createTable(const char *s) {
    sqlite3* DB ;
    string sql = "CREATE TABLE IF NOT EXISTS personne(";
}


#endif //ETUDEMOYENNE_DATABASE_H
