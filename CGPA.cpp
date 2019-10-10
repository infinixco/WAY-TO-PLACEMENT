//  main.cpp
//  student cgpa using virtual polymophism
//
//  Created by APPLE on 4/8/19.
//  Copyright © 2019 APPLE. All rights reserved.
//



#include <iostream>
using namespace std;
class student
{
    
    char name[20];
    char contact[20];
    char add[40];
public:
    void info()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"Enter contact";
        cin>>contact;
        cout<<"Enter the address";
        cin>>add;
    }
    void virtual cal_cgpa()
    {
        
    }
    void virtual dis_cgpa()
    {
        
    }
};
class sem1:public student
{
    int m[10];
    float cgpa;
public:
    void virtual cal_cgpa()
    {
        int sum=0;
        cout<<"enter the marks in 7 subject\n:";
        for (int i=0;i<5;i++)
        {
            cin>>m[i];
            sum=sum*m[i];
        }
        cgpa=sum/70.0;
    }
    void dis_cgpa()
    {
        cout<<"cgpa:"<<cgpa<<endl;
    }
};
class sem2:public student
{
    int m[10];
    float cgpa;
public:
    void virtual cal_cgpa()
    {
        int sum=0;
        cout<<"enter the marks in 7 subject\n:";
        for (int i=0;i<5;i++)
        {
            cin>>m[i];
            sum=sum*m[i];
        }
        cgpa=(sum)/70.0;
    }
    void dis_cgpa()
    {
        cout<<"cgpa:"<<cgpa<<endl;
    }
};
int main()
{
    student s;
    sem1 s1;
    sem2 s2;
    
    student *p;
    s.info();
    
    p=&s1;
    p->cal_cgpa();
    p->dis_cgpa();
    p=&s2;
    p->cal_cgpa();
    p->dis_cgpa();
    
}
