//
//  main.cpp
//  SLAM
//
//  Created by April Young on 5/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include "slam.hpp"
#include "Matrix.hpp"
#include <bitset>

int main(int argc, const char * argv[]) {

    cout << "begin: "  << clock() << endl;

    vector<double> p (5,0.2);

    vector<string> world = {"green", "red", "red", "green", "green"};
    vector<string> measurements = {"red", "green"};
    vector<double> motions = {1, 1};
    double pHit = 0.6;
    double pMiss = 0.2;
    double pExact = 0.8;
    double pOvershoot = 0.1;
    double pUndershoot = 0.1;

    for (int k=0; k<measurements.size(); k++)
    {
        p = sense(p, measurements[k], world, pHit, pMiss);
        p = move(p, motions[k], pExact, pOvershoot, pUndershoot);
    }

    print_vector(p);

    /* 两种初始化对象的方法 */
    Matrix mat1({{1,2,3},{4,5,6}});
    Matrix mat2 = mat1.matrix_transpose();
    Matrix mat3 = Matrix({{1,1,1},{2,2,2}});
    Matrix mat4 = mat1.matrix_addition(mat3);
    mat1.matrix_print();
    mat2.matrix_print();
    mat4.matrix_print();
    
//    Matrix mat10;
    string name = "Hello!";
    
    string *newn;
//    memcpy(&newn, &name, name.length()+1);
    newn = &name;
    cout << *newn << endl;
    name = "llal";
    cout << *newn << endl;
//    cout << "end: "  << clock()/double(CLOCKS_PER_SEC) << endl;

    return 0;
}
