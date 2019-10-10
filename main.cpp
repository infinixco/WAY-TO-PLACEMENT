//
//  main.cpp
//  4-02-2019
//
//  Created by APPLE on 2/4/19.
//  Copyright © 2019 APPLE. All rights reserved.
//
//static
#include <iostream>
using namespace std;

class super
{
public:
    static int m;
    int x;
    static int memfun ()
    {
        cout<<"\nValue of a is "<<m;
    }
    void display()
        {
            cout<<"\n Value is"<<++m;
        }
    
};
int super::m=20;//how to initialize static data function
int mian()
{
    super s1,s2;
    s1.display();
    s2.display();
    super::memfun();
    s2.memfun();
    
    return 0;
}
