//
//  main.cpp
//  constructor
//
//  Created by APPLE on 2/20/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>
using namespace std;
class name
{
    int x;
    float y;
public:
    name()
    {
    cin>>x>>y;
    }
    void out()
    {
        cout<<x<<y;
    }
};
int main()
{
    class name n1;
    n1.out();
}
