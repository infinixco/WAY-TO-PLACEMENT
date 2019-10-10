//
//  main.cpp
//  conversoin basic to class
//
//  Created by APPLE on 3/19/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>
using namespace std;
class bytes
{
    int bits,bytes;
public:
    bytes(){}
    bytes (int values)
    //class bytes(int value)
    {
        byts=values/8;
        byts=values%8;
    }
    void display()
    {
        cout<<"\nBytes are"<<bbyts<<"bits are"<<bits;
    }
};
int main()
{
    int values;
    cout<<"\nEnter values in bits";
    cin>>values;
    bytes b1;
    //bytes b1(values);
    b1=values;
    b1.display();
}

//take cgpa of student and convert it into percantage class data members
