//
//  Mulitifly.hpp
//  Template
//
//  Created by Young on 10/22/18.
//  Copyright © 2018 Young. All rights reserved.
//

#ifndef Mulitifly_hpp
#define Mulitifly_hpp

#include<stdio.h>

/** Because templates are compiled when required, this forces a restriction for multi-file projects: the implementation (definition) of a template class or function must be in the same file as its declaration. That means that we cannot separate the interface in a separate header file, and that we must include both interface and implementation in any file that uses the templates.
 
 Since no code is generated until a template is instantiated when required, compilers are prepared to allow the inclusion more than once of the same template file with both declarations and definitions in a project without generating linkage errors.
 */

template <class T>
class Mulitifly
{
    
public:
    T a,b;
    
    Mulitifly();
    Mulitifly(T,T);
    T product();
};

template <class T>
Mulitifly<T>::Mulitifly()
{
    a = 0;
    b = 0;
}

template <class T>
Mulitifly<T>::Mulitifly(T in1, T in2)
{
    a = in1;
    b = in2;
}

template <class T>
T Mulitifly<T>::product() {
    return a*b;
}

/** specialization type */
template <>
class Mulitifly<char>
{
public:
    char a,b;
    
    Mulitifly(){a='a';b='b';};
    Mulitifly(char i,char j){a=i;b=j;};
    char product()
    {
        return 'v';
    };
};

/** Non-type */
template <class T, int N>
class ClassRoom {
    T students [N];
    
public:
    ClassRoom(){}
    ClassRoom(T defaultValue)
    {
        for (int i=0; i < N; i++)
        {
            students[i] = defaultValue;
        }
    }
    void setStu(T value, int n)
    {
        students[n] = value;
    }
    T getStu(int n)
    {
        return students[n];
    }
};

#endif /* Mulitifly_hpp */
