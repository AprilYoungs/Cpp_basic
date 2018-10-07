#include "matrix_addition_improved.h"

using namespace std;

vector < vector <int> > matrix_addition_improved (vector < vector <int> > matrixa, vector < vector <int> > matrixb) {

    // default zero vector
    vector < vector <int> > matrix_sum(matrixa.size(), vector<int>(matrixa[0].size(),0));

    // if both matrices have the same size, calculate and return the sum
    // otherwise check if the number of rows and columns are not equal and return a matrix of zero
    if (matrixa.size() == matrixb.size() && matrixa[0].size() == matrixb[0].size()) {

        for (unsigned int i = 0; i < matrixa.size(); i++) {
            for (unsigned int j = 0; j < matrixa[0].size(); j++) {
                matrix_sum[i][j] = matrixa[i][j] + matrixb[i][j];
            }
        }
        // vector<int>::size_type rows = matrixa.size();
        // vector<int>::size_type cols = matrixa[0].size();
        // for (unsigned int i = 0; i < rows*cols; i++) {
        //         matrix_sum[i/cols][i%rows] = matrixa[i/cols][i%rows] + matrixb[i/cols][i%rows];
        // }
        return matrix_sum;
    }

    return matrix_sum;


}
