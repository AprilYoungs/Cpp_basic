//
//  matrix.cpp
//  TwoDVector
//
//  Created by April Young on 4/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include "matrix.hpp"

void print_matrix(matrix mat)
{
    for (int i=0; i < mat.size(); i++)
    {
        for (int j=0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

matrix operator+(const matrix lhs, const matrix rhs)
{
    if (lhs.size() != rhs.size()
        ||lhs[0].size() != rhs[0].size())
    {
        throw runtime_error("The operation can't be cast between diff size matrix!");
    }
    
    matrix result(lhs.size(), vector<float>(lhs[0].size()));
    
    for (int i=0; i < lhs.size(); i++)
    {
        for (int j=0; j < lhs[i].size(); j++)
        {
            result[i][j] = lhs[i][j] + rhs[i][j];
        }
    }
    
    return result;
}

matrix operator-(const matrix lhs, const matrix rhs)
{
    if (lhs.size() != rhs.size()
        ||lhs[0].size() != rhs[0].size())
    {
        throw runtime_error("The operation can't be cast between diff size matrix!");
    }
    
    matrix result(lhs.size(), vector<float>(lhs[0].size()));
    
    for (int i=0; i < lhs.size(); i++)
    {
        for (int j=0; j < lhs[i].size(); j++)
        {
            result[i][j] = lhs[i][j] - rhs[i][j];
        }
    }
    
    return result;
}

matrix operator*(const matrix lhs, const matrix rhs)
{
    if (lhs.size() != rhs.size()
        ||lhs[0].size() != rhs[0].size())
    {
        throw runtime_error("The operation can't be cast between diff size matrix!");
    }
    
    matrix result(lhs.size(), vector<float>(lhs[0].size()));
    
    for (int i=0; i < lhs.size(); i++)
    {
        for (int j=0; j < lhs[i].size(); j++)
        {
            result[i][j] = lhs[i][j] * rhs[i][j];
        }
    }
    
    return result;
}

matrix operator/(const matrix lhs, const matrix rhs)
{
    if (lhs.size() != rhs.size()
        ||lhs[0].size() != rhs[0].size())
    {
        throw runtime_error("The operation can't be cast between diff size matrix!");
    }
    
    matrix result(lhs.size(), vector<float>(lhs[0].size()));
    
    for (int i=0; i < lhs.size(); i++)
    {
        for (int j=0; j < lhs[i].size(); j++)
        {
            result[i][j] = lhs[i][j] / rhs[i][j];
        }
    }
    
    return result;
}
