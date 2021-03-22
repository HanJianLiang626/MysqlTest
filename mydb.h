#ifndef __MYDB_H__
#define __MYDB_H__

#include <iostream>
#include <string>
#include <mysql/mysql.h>

class MyDb
{
public:
    MyDb();
    ~MyDb();

    bool MyDbConnect(const char *host, 
                    const char *user, 
                    const char *passwd, 
                    const char *db, 
                    unsigned int port, 
                    const char *unix_socket,
                    unsigned long client_flag);
    int MyDbClose();

public:
    int add();
    int Delete();
    int print();
private:
    MYSQL mysql;
};

#endif // !__MYDB_H__