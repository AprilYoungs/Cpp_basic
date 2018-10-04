//
//  main.cpp
//  Vector
//
//  Created by April Young on 4/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>


int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::vector<std::vector<int>> grid;
    grid = {{1,34,3},
            {3,6,9}
            };
    
    
    for (int i = 0; i < grid.size(); i++)
    {
        std::cout << "line:" << i << std::endl;
        for (int j = 0; j < grid[i].size(); j++)
        {
            std::cout << grid[i][j] << std::endl;
        }
    }
    
    std::map<int, int> theMap;
    
    return 0;
}
