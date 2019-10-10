//
//  main.cpp
//  class named acc holder balance
//
//  Created by APPLE on 2/26/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>
using namespace std;
class account
{
    int acc_num;
    char hname[30];
    float balance;
public:
    void in()
    {
        cin>>acc_num>>hname>>balance;
    }
    void friend frr(account a1);
};
void frr(account a2)
{
    cout<<a2.acc_num<<endl<<a2.hname;
    cout<<a2.balance-2000;
}
int main()
    {
        account aa;
        aa.in();
        frr(aa);
    }
