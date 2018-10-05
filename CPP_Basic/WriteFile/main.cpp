//
//  main.cpp
//  WriteFile
//
//  Created by April Young on 5/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector < vector <float> > matrix(4, vector<float>(3, 8));
    
    // 創建文件
    ofstream outFile;
    outFile.open("matrix.txt");
    
    // 跟輸入到控制台一樣,只不過這次寫到文件
    if (outFile.is_open())
    {
        for (int i =0; i < matrix.size(); i++)
        {
            for (int j=0; j < matrix[i].size(); j++)
            {
                cout << matrix[i][j] << " ";
                outFile << matrix[i][j] << " ";
            }
            cout << endl;
            outFile << endl;
        }
    }
    else
    {
        cout << "Open file fail" << endl;
    }
    
    outFile.close();
    
    
    
    return 0;
}
