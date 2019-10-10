//
//  main.cpp
//  dynamic destructor
//
//  Created by APPLE on 4/9/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>
#include<string.h>
using namespace std;
class str
{
    char *name;
    int len;
public:
    str()
    {
        len=0;
        name=new char [len+1];
    }
    str (char *s)
    {
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void show()
    {
        cout<<"name is:-"<<name<<endl;
    }
    void join(str &a,str &b);
};
void str::join(str &c,str &d)
{
    len=c.len+d.len;
    delete name;
    name=new char[len+1];
    strcpy(name,c.name);
    strcpy(name,d.name);
}
int main()
{
    char *first="Hdbbhbfdbfhdhf";
    str n1(first),n2("mitabh"),n3("dfnjfdfj"),n4,n5;
    n4.join(n1,n2);
    n5.join(n4,n3);
    n1.show();
    n2.show();
    n3.show();
    n4.show();
    n5.show();
}
