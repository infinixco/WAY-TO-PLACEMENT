//
//  main.cpp
//  class to basic
//
//  Created by APPLE on 3/19/19.
//  Copyright © 2019 APPLE. All rights reserved.
//class to basic

#include <iostream>
using namespace std;
class convert
{
    float cgpa,factor;
public:
    operator float ();//member function
    void input()
    {
        cout<<"Enter the value";
        cin>>cgpa>>factor;
    }
};
convert::operator float()//casting oprator
{
    float sum;
    sum=cgpa*factor;
    return sum;
}
int main()
{
    convert a1;
    a1.input();
    float percent;
    //percent=a1;//alternate for next line
    percent=a1.operator float();
    cout<<percent;
}
//create a class with 5 data members this 5 data members are marks of 5 subject you have obtained. convert the marks into precentage using class basic
