//
//  main.cpp
//  call byrefence
//
//  Created by APPLE on 2/5/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>

using namespace std;
void swap (int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"in function values after swap are "<<a<<endl<<b;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"values after swap are "<<x<<endl<<y;
    swap(x,y);
    cout<<"values after swap are "<<x<<endl<<y;
    return 0;
}
