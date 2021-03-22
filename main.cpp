#include <iostream>
#include "mydb.h"


int main(int argc, char **argv)
{
    MyDb mydb;
    mydb.MyDbConnect("127.0.0.1", "root", "111111", "products", 3306, NULL, 0);
    return 0;
}