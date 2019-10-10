//
//  main.cpp
//  class named computer
//
//  Created by APPLE on 2/12/19.
//  Copyright © 2019 APPLE. All rights reserved.
//
//create a class named a computer data members are company name , types ,cost enter the detail for the 3 computers and display

#include <iostream>
using namespace std;
class computer
{
    char name[30];
    char type[30];
    int *cost;
public:
    void in()
    { int x;
        cost=&x;
        cin>>name>>type>>x;
    }
    void out()
    {
        cout<<endl<<name<<endl<<type<<endl<<*cost<<endl;
    }
};
int main()
{
    class computer a[3];
    int i;
    for(i=0;i<3;i++)
    {
        a[i].in();
    }
    for(i=0;i<3;i++)
    {
        a[i].out();
    }
}

/*The manager of secuirity firm asks his employee to store the data about product number ,cost,supplier ID and status (a or i). BUt due to restrictions  he cannot use the variables name,he has to use a single pointer to each variable. WAP to store the avoid detais with using single pointer. A is active and I is for inactive.*/
