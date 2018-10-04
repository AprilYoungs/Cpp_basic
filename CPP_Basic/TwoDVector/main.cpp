//
//  main.cpp
//  TwoDVector
//
//  Created by April Young on 4/10/2018.
//  Copyright © 2018 April. All rights reserved.
//  matrix

#include <iostream>
#include "matrix.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    
    matrix mat1 = {{2,3,1},
                   {4,5,6}
                   };
    
    print_matrix(mat1);
    
    matrix mat2(2, vector<float>(3,2));
    matrix mat3(3, {2,2});
    
    print_matrix(mat2);
    print_matrix(mat3);
    
    print_matrix(mat1+mat1);
    print_matrix(mat1-mat2);
    print_matrix(mat1*mat2);
    print_matrix(mat1/mat2);
    
    return 0;
}
