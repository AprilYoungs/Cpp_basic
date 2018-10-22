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
int main(int argc, const char * argv[]) {

    Mulitifly<int> mul;
    cout << mul.product() << endl;

    mul.a = 2;
    mul.b = 4;

    cout << "After->" << mul.product() << endl;

    Mulitifly<float> mul1(2.23, 2.3);
    cout << mul1.product() << endl;
    
    return 0;
}
