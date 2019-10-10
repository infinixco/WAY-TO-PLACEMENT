//
//  main.cpp
//  Avarage marks for student
//
//  Created by APPLE on 2/5/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int mark[5], i;
    float sum=0;
    cout<<"Enter marks obtained in Physics, Chemistry, Maths, CS, English :";
    for(i=0; i<5; i++)
    {
        cin>>mark[i];
        sum=sum+mark[i];
    }
    float avg=sum/5;
    float perc;
    perc=(sum/500)*100;
    cout<<"Average Marks = "<<avg;
    cout<<"\nPercentage = "<<perc<<"%";
}
