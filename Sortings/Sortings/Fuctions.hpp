//
//  Fuctions.hpp
//  Sortings
//
//  Created by April Young on 25/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#ifndef Fuctions_hpp
#define Fuctions_hpp

#include <iostream>
#include <vector>

template <typename T>
void print(std::vector<T> vec)
{
    for (int i=0; i<vec.size(); ++i)
    {
        printf("%02d  ",vec[i]);
        if ((i+1)%5==0)
        {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

template <typename T>
std::vector<T> bubbleSort(std::vector<T> arr)
{
    for (int i=0; i<arr.size(); i++)
        for (int j=i+1; j<arr.size(); j++)
        {
            if(arr[j] < arr[i])
            {
                arr[i] = arr[j]+arr[i];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
        }
    return arr;
}

template <typename T>
std::vector<T> selectSort(std::vector<T> arr){
    
    for (int i=0; i<arr.size(); i++)
    {
        int min = i;
        for (int j=i+1; j<arr.size(); j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        /* if min is on it's right location,no need to swap */
        if (min==i) continue;
        
        arr[i] = arr[i]+arr[min];
        arr[min] = arr[i]-arr[min];
        arr[i] = arr[i]-arr[min];
    }
    
    return arr;
}

template <typename T>
std::vector<T> insertionSort(std::vector<T> arr){
    
    for (int i=1; i<arr.size(); i++)
    {
        for (int j=i-1; j>=0; --j)
        {
            if (arr[j]>arr[i])
            {
                arr[i] = arr[j]+arr[i];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
                i = j;
            }
            else
            {
                continue;
            }
        }
    }
    
    return arr;
}


#endif /* Fuctions_hpp */
