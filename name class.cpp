//
//  main.cpp
//  car name class
//
//  Created by APPLE on 2/26/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>
using namespace std;
class car
{
    char carname[30];
    char ccomp[30];
    int myear;
    float cost;
public:
    void in()
    {
        
        cin>>carname>>ccomp>>myear>>cost;
    }
    void out()
    {
        cout<<endl<<carname<<endl<<ccomp<<endl<<myear<<endl<<cost;
    }
    int year()
    {
        return myear;
    }
};
int main()
{
    car c1[5];
    int x,year1,count=0;
    for(x=0;x<5;x++)
    {
        c1[x].in();
        c1[x].out();
    }
    cin>>year1;
    for(x=0;x<5;x++)
    {
        if(year1==c1[x].year())
        {
            count++;
        }
    }
        if(count>0)
            cout<<"Number of the cars"<<count;
    else
        cout<<"car does not match";
}

