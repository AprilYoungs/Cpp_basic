//
//  Matrix.cpp
//  SLAM
//
//  Created by April Young on 6/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include "Matrix.hpp"

Matrix::Matrix(){
    grid = {{0,0},{0,0}};
    rows = grid.size();
    cols = grid[0].size();
}

Matrix::Matrix(std::vector<std::vector<float>> mat)
{
    grid = mat;
    rows = grid.size();
    cols = grid[0].size();
}


std::vector<std::vector<float>> Matrix::getGrid()
{
    return grid;
}

std::vector<float>::size_type Matrix::getRows()
{
    return rows;
}

std::vector<float>::size_type Matrix::getCols()
{
    return cols;
}

Matrix Matrix::matrix_transpose()
{
    std::vector<std::vector<float>> old = getGrid();
    std::vector<std::vector<float>> trans (getCols(), std::vector<float>(getRows()));

    for (int i=0; i<trans.size(); i++)
    {
        for (int j=0; j<trans[i].size(); j++)
        {
            trans[i][j] = old[j][i];
        }
    }

    return Matrix(trans);
}
Matrix Matrix::matrix_addition(Matrix rhs)
{

    std::vector<std::vector<float>> mine = getGrid();
    std::vector<std::vector<float>> other = rhs.getGrid();

    if (mine.size() != other.size()
        || mine[0].size() != other[0].size())
    {
        throw std::invalid_argument("can't add to matrix with different size");
    }

    std::vector<std::vector<float>> sum(getRows(), std::vector<float>(getCols()));

    for (int i=0; i<mine.size(); i++)
    {
        for (int j=0; j<mine[i].size(); j++)
        {
            sum[i][j] = mine[i][j] + other[i][j];
        }
    }

    return Matrix(sum);
}

void Matrix::matrix_print()
{
    std::cout << std::endl;
    for (int i=0; i<getRows(); i++)
    {
        for (int j=0; j<getCols(); j++)
        {
            std::cout << getGrid()[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
