//
//  Inheritance.cpp
//  Classes
//
//  Created by Young on 10/23/18.
//  Copyright © 2018 Young. All rights reserved.
//

#include "Inheritance.hpp"

void Pet::show()
{
    printf("Name:%s,breed:%s,id:%d\n",getName().c_str(),getBreed().c_str(),getIdNumber());
}
