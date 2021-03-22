#include <iostream>

#include "mydb.h"

MyDb::MyDb() 
{
    mysql_init(&mysql);
}

MyDb::~MyDb()
{
    mysql_close(&mysql);
}

bool MyDb::MyDbConnect(const char *host, 
                    const char *user, 
                    const char *passwd, 
                    const char *db, 
                    unsigned int port, 
                    const char *unix_socket,
                    unsigned long client_flag)
{
    if (NULL == mysql_real_connect(&mysql, host, user, passwd, db, port, unix_socket, client_flag) )
    {
        std::cout << "Error connecting" << std::endl;
        return false;
    }
    std::cout << "Success connecting" << std::endl;
    return true;
}