//
//  main.cpp
//  VectorAndIterator
//
//  Created by Young on 10/29/18.
//  Copyright © 2018 Young. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> vec)
{
    vector<int>::iterator it;
    for (it=vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    
    vector<int> vec;
    
    cout << vec.size() << endl;
    
    vec = {1,2,3,4};
    
    cout << vec.size() << endl;
    
    vector<int>::iterator it = vec.begin();
    
    vec.insert(it, 10);
    /** after a insertion, you need to put the iterator
     to the begin again */
    it = vec.begin();
    vec.insert(it+2, 20);
    cout << "Insert first element 10\n";
    print(vec);
    
    it = vec.begin();
    vec.emplace(it+1, 13);
    cout << "Insert sec element 13\n";
    print(vec);
    
    cout << "Erase 2 element\n";
    it = vec.begin();
    vec.erase(it+2);
    print(vec);
    
    cout << "Erase 1 ~ 3\n";
    it = vec.begin();
    vec.erase(it+1, it+3);
    print(vec);
    
    cout << "Pop back\n";
    vec.pop_back();
    print(vec);
    
    vec.clear();
    cout << "Clear" << endl;
    print(vec);
    
    return 0;
}

