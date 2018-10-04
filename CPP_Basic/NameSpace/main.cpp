//
//  main.cpp
//  NameSpace
//
//  Created by April Young on 4/10/2018.
//  Copyright © 2018 April. All rights reserved.
//

#include <iostream>
#include <string>

//使用命名空间
//应用时可以不带库的出处
//缺点,容易出命名冲突
//不同命名空间,可以有相同函数名的函数
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string name = "April";
    string age = "28";
    
    cout << "My name is " << name << " and I'm " << age << " years old" << endl;
    
    return 0;
}
