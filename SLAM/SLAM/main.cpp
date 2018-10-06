//
//  main.cpp
//  SLAM
//
//  Created by April Young on 5/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include "slam.hpp"

int main(int argc, const char * argv[]) {
    
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
    
    matrix mat1 =
                {{1,2,3},
                 {4,5,6}
                };
    
    matrix mat2 =
                {{2,4},
                 {6,8},
                 {10,12},
                };
    matrix new_mat = mat1*mat2;
    
    print_matrix(new_mat);
    
    return 0;
}



