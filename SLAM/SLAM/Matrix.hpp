//
//  Matrix.hpp
//  SLAM
//
//  Created by April Young on 6/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <vector>
#include <iostream>


// Header file for the Matrix class

/*
 **  TODO:
 **    Declare the following private variables:
 **      a 2D float vector variable called grid
 **      a vector size_type variable called rows
 **      a vector size_type variable called cols
 */
class Matrix
{
    private:
        std::vector<std::vector<float>> grid;
        std::vector<float>::size_type rows;
        std::vector<float>::size_type cols;

    public:
        Matrix ();
        Matrix (std::vector<std::vector<float>>);

        std::vector<std::vector<float>> getGrid();
        std::vector<float>::size_type getRows();
        std::vector<float>::size_type getCols();

        Matrix matrix_transpose();
        Matrix matrix_addition(Matrix rhs);
        void matrix_print();
};


#endif /* Matrix_hpp */
