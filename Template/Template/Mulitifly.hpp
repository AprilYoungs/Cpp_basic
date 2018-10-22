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

#endif /* Mulitifly_hpp */
