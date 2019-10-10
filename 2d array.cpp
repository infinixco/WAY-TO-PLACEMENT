//
//  main.cpp
//  2d array initialization
//
//  Created by APPLE on 2/18/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int a[2][3][2]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<-a[1][1][1];//00,01,02,10,11,12
//*(a+2)=a[2]=2[a]=*(2+a)
}
