//
//  slam.cpp
//  SLAM
//
//  Created by April Young on 6/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include "slam.hpp"

void print_vector(vector<double> vec)
{
    for (int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << ", ";
    }
    cout << endl;
}

void print_matrix(matrix mat)
{
    for (int i=0; i<mat.size(); i++)
    {
        print_vector(mat[i]);
    }
}

double sum(vector<double> vec)
{
    double sum = 0;
    for (int i=0; i<vec.size(); i++)
    {
        sum += vec[i];
    }
    return sum;
}

vector<double> sense(vector<double> p, string Z, vector<string> world, double pHit, double pMiss)
{
    vector<double> q (p.size());
    bool hit;
    for (int i=0; i<p.size(); i++)
    {
        hit = (Z.compare(world[i])==0);
        q[i] = p[i] * (hit * pHit + (1-hit) * pMiss);
    }
    
    double s = sum(q);
    
    for (int i=0; i<q.size(); i++)
    {
        q[i] = q[i] / s;
    }
    
    return q;
}
vector<double> move(vector<double> p, int U, double pExact, double pOvershoot, double pUndershoot)
{
    vector<double> q;
    double s;
    
    for (int i=0; i<p.size(); i++)
    {
        /* MODE % 的时候要注意数据类型,unint 和 int 取模会出错误 */
        int size = (int)p.size();
        
        /* c++的数组,没有-index,循环的时候要注意补齐 */
        int index_exact = (i-U)%size >= 0? (i-U)%size: (i-U)%size+size;
        int index_over = (i-U-1)%size >= 0? (i-U-1)%size: (i-U-1)%size+size;
        int index_under = (i-U+1)%size >= 0? (i-U+1)%size: (i-U+1)%size+size;
        s = pExact * p[index_exact];
        s = s + pOvershoot * p[index_over];
        s = s + pUndershoot * p[index_under];
        q.push_back(s);
    }
    
    return q;
}

vector<vector<double> > operator*(vector<vector<double> > lhs, vector<vector<double> > rhs)
{
    if (lhs[0].size() != rhs.size())
    {
        throw runtime_error("Matrix product can't boadcast!");
    }else
    {
        vector<vector<double> > product(lhs.size(),vector<double>(rhs[0].size(), 0));
        
        for(int i=0; i<product.size(); i++)
        {
            for(int j=0; j<product[i].size(); j++)
            {
                for(int k=0; k<lhs[i].size(); k++)
                {
                    product[i][j] += lhs[i][k]*rhs[k][j];
                }
            }
        }
        
        return product;
    }
}
