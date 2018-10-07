#include "reserved.hpp"
#include <iostream>

using namespace std;

vector< vector<int> > reserved(int rows, int cols, int initial_value) {

    // OPTIMIZE: use the reserve method with the matrix and new_row variables
    vector< vector<int> > matrix;
    vector<int> new_row;
    matrix.reserve(rows);
    new_row.reserve(cols);

    for (vector< vector<int> >::iterator it=matrix.begin(); it!=matrix.end(); it++)
    {
      it->reserve(cols);
      cout<<"time"<<endl;
    }

    for (int j = 0; j < cols; j++) {
        new_row.push_back(initial_value);
    }

    for (int i = 0; i < rows; i++) {
        matrix.push_back(new_row);
    }

    return matrix;
}
