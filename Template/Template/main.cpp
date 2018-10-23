//
//  main.cpp
//  Template
//
//  Created by Young on 10/22/18.
//  Copyright © 2018 Young. All rights reserved.
//

#include <iostream>
#include "Mulitifly.hpp"

using namespace std;

template <class T>
T GetMax (T a, T b)
{
    return a+b;
}

int main(int argc, const char * argv[]) {

    Mulitifly<int> mul;
    cout << mul.product() << endl;

    mul.a = 2;
    mul.b = 4;

    cout << "After->" << mul.product() << endl;

    Mulitifly<float> mul1(2.23, 2.3);
    cout << mul1.product() << endl;
    
    cout << GetMax<float>(37.2, 23.3) << endl;
    
    int *a = new int;
    
    cout << a << endl;
    
    cout << "--------------" << endl;
    
    Mulitifly<char> mula('i','j');
    cout << mula.a << mula.b << mula.product() << endl;
    
    ClassRoom<float, 5> cla;
//    cla.setStu(1.23, 0);
//    cla.setStu(2.23, 1);
//    cla.setStu(3.23, 2);
//    cla.setStu(4.23, 3);
//    cla.setStu(5.23, 4);
    
    cout << cla.getStu(0) << endl;
    cout << cla.getStu(1) << endl;
    cout << cla.getStu(2) << endl;
    cout << cla.getStu(3) << endl;
    cout << cla.getStu(4) << endl;
    
    return 0;
}
