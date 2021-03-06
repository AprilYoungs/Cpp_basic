//
//  main.cpp
//  Vector2
//
//  Created by April Young on 4/10/2018.
//  Copyright © 2018 April. All rights reserved.
//
//TODO: include the iostream and vector libraries
#include <iostream>
#include <vector>

//TODO: Use the standard namespace
using namespace std;

int main() {
    
    vector<float> vector1 (3, 5.0);
    for (int i=0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;
    
    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
    
    // Part 2: Use push back to add the values 3.0, 2.5, 1.4
    //      to the back of the vector
    vector1.push_back(3.0);
    vector1.push_back(2.5);
    vector1.push_back(1.4);
    cout << "add values \n";
    for (int i=0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;
    // Part 3: Print out the vector again using cout
    
    // Part 4: Use the vector assign method to override the current vector.
    // The overriden vector should have 3 elements with
    // the values {5.0, 5.0, 5.0}
    vector1.assign(3, 5.0);
    // Part 5: Print out the vector
    cout << "resign values \n";
    for (int i=0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;
    
    return 0;
}
