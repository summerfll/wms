#include "connect_database.h"
#include <QSqlQuery>

QSqlDatabase ConnectDatabase::db = QSqlDatabase::addDatabase("QMYSQL");


ConnectDatabase::ConnectDatabase()
{

}


ConnectDatabase::~ConnectDatabase()
{

}

// Open the Database
bool ConnectDatabase::openDatabase()
{

    db.setHostName("localhost");
    db.setDatabaseName("library");
    db.setUserName("root");
    db.setPassword("666666");
    db.setPort(3306);

    if (!db.open())
    {
      //  printf("----------------------------------------database false-------------------------------\n");
        return false;
    }
    else
    {
       // printf("-------------------------------------database true--------------------\n");
    }
    return true;
}

// Close Database
void ConnectDatabase::closeDatabase()
{
    db.close();
}
