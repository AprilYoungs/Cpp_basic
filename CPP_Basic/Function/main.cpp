//
//  main.cpp
//  Function
//
//  Created by April Young on 3/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int num = 10;
    
    for (int i=0; i < 11; i++)
    {
        switch (i) {
            case 1:
                std::cout << "hello, wold!\n";
                break;
            case 4 ... 10:
                std::cout << "4:7->" << i << std::endl;
                break;
            default:
                std::cout << "else\n";
                break;
        }
    }
    
    
    return 0;
}
