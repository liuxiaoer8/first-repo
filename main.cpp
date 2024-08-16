#include <iostream>
#include <memory>
#include "cat.h"
using namespace std;

int main()
{
    Cat c1("OK");
    c1.cat_info();

    {
       Cat c1("OK");
       c1.cat_info();
    }
    cout<<"hello world"<<endl;
    return 0;
}