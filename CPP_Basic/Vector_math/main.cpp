//
//  main.cpp
//  Vector_math
//
//  Created by April Young on 4/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
typedef vector<float> Vector;

vector<float> add(vector<float> vector1, vector<float> vector2);

void print_vector(Vector v);

/* 重载overload 计算符号 */
Vector operator+(const Vector lhs, const Vector rhs);
Vector operator-(const Vector lhs, const Vector rhs);
Vector operator*(const Vector lhs, const Vector rhs);
Vector operator/(const Vector lhs, const Vector rhs);

int main(int argc, const char * argv[]) {
    
    Vector v1 = {1,2,4,5};
    Vector v2 = {6,7,8,5};
    
    print_vector(v1);
    print_vector(v2);
    print_vector(add(v1, v2));

    print_vector(v1+v2);
    
    print_vector(v1-v2);
    print_vector(v1*v2);
    print_vector(v1/v2);
    
    return 0;
}

vector<float> add(vector<float> vector1, vector<float> vector2)
{
    vector<float> vector_sum(vector1.size());
    
    for (int i=0; i < vector1.size(); i++)
    {
        vector_sum[i] = vector1[i]+vector2[i];
    }
    
    return vector_sum;
}

void print_vector(Vector v)
{
    for (int i=0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

Vector operator+(const Vector lhs, const Vector rhs)
{
    if (lhs.size() != rhs.size())
    {
        throw runtime_error("Can't add two vector with diff size!");
    }
    
    vector<float> result(lhs.size());
    
    for (int i=0; i < lhs.size(); i++)
    {
        result[i] = lhs[i]+rhs[i];
    }
    
    return result;
}

Vector operator-(const Vector lhs, const Vector rhs)
{
    if (lhs.size() != rhs.size())
    {
        throw runtime_error("Can't subtract two vector with diff size!");
    }
    
    vector<float> result(lhs.size());
    
    for (int i=0; i < lhs.size(); i++)
    {
        result[i] = lhs[i]-rhs[i];
    }
    
    return result;
}

Vector operator*(const Vector lhs, const Vector rhs)
{
    if (lhs.size() != rhs.size())
    {
        throw runtime_error("Can't multiplicate two vector with diff size!");
    }
    
    vector<float> result(lhs.size());
    
    for (int i=0; i < lhs.size(); i++)
    {
        result[i] = lhs[i]*rhs[i];
    }
    
    return result;
}

Vector operator/(const Vector lhs, const Vector rhs)
{
    if (lhs.size() != rhs.size())
    {
        throw runtime_error("Can't divise two vector with diff size!");
    }
    
    vector<float> result(lhs.size());
    
    for (int i=0; i < lhs.size(); i++)
    {
        result[i] = lhs[i]/rhs[i];
    }
    
    return result;
}
