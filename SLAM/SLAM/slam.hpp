//
//  slam.hpp
//  SLAM
//
//  Created by April Young on 6/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#ifndef slam_hpp
#define slam_hpp

#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<vector<double> > matrix;

void print_vector(vector<double> vec);
void print_matrix(matrix mat);
double sum(vector<double> vec);
vector<double> sense(vector<double> p, string Z, vector<string> world, double pHit, double pMiss);
vector<double> move(vector<double> p, int U, double pExact, double pOvershoot, double pUndershoot);


/**
 矩阵乘法,点积

 @param lhs lhs
 @param rhs rhs
 @return the product result
 */
vector<vector<double> > operator*(vector<vector<double> > lhs, vector<vector<double> > rhs);

#endif /* slam_hpp */
