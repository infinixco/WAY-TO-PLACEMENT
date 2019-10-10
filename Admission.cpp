//
//  main.cpp
//  University admission
//
//  Created by APPLE on 1/28/19.
//  Copyright © 2019 APPLE. All rights reserved.
//

#include <iostream>

using namespace std;
class uni
{
    static int count;
public:
    void calc()
    {count++;};
    void show()
    {
        cout<<count;
        
    }
    
};
int uni::count;
main()
{
    uni in,out,on,head;
    in.calc();
    out.calc();out.calc();out.calc();
    in.calc();in.calc();in.calc();
    on.calc();on.calc();
    out.calc();
    head.show();
    uni::calc();
}
