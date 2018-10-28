//
//  main.cpp
//  Sortings
//
//  Created by April Young on 25/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include <iostream>
#include <ctime>
#include "Fuctions.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    
    vector<int> array = {5,2,1,90,40,25,45,12,30,20};
    print(array);
    
    int iteration = 10000;
    clock_t start;
    double duration;
    
    start = clock();
    vector<int> bubble;
    for (int i=0; i<iteration; ++i)
    {
        bubble = bubbleSort(array);
    }
    duration = (clock()-start)/(double)CLOCKS_PER_SEC;
    cout << "Duration milliseconds for bubble sort->"<< duration*1000 << endl;
    cout <<  "After bubble\n";
    print(bubble);
    
    
    
    start = clock();
    vector<int> selection;
    for (int i=0; i<iteration; ++i)
    {
        selection = selectSort(array);
    }
    duration = (clock()-start)/(double)CLOCKS_PER_SEC;
    cout << "Duration milliseconds for selection sort->"<< duration*1000 << endl;
    cout << "After selection\n";
    print(selection);
    
    
    start = clock();
    vector<int> insertion;
    for (int i=0; i<iteration; ++i)
    {
        insertion = insertionSort(array);
    }
    duration = (clock()-start)/(double)CLOCKS_PER_SEC;
    cout << "Duration milliseconds for insertion sort->"<< duration*1000 << endl;
    cout << "After insertion\n";
    print(insertion);
    
    return 0;
}
