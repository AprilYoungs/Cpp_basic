//
//  matrix.hpp
//  TwoDVector
//
//  Created by April Young on 4/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#ifndef matrix_hpp
#define matrix_hpp

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<float>> matrix;


/**
 print out the matrix

 @param mat the mat the be print
 */
void print_matrix(matrix mat);

matrix operator+(const matrix lhs, const matrix rhs);
matrix operator-(const matrix lhs, const matrix rhs);
matrix operator*(const matrix lhs, const matrix rhs);
matrix operator/(const matrix lhs, const matrix rhs);

#endif /* matrix_hpp */
