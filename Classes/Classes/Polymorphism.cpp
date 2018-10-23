//
//  Polymorphism.cpp
//  Classes
//
//  Created by Young on 10/23/18.
//  Copyright © 2018 Young. All rights reserved.
//

#include "Polymorphism.hpp"


void Animal::bark()
{
    std::cout << "Animal: " << type << " barking" << std::endl;
}

void Cat::bark()
{
    std::cout << "Cat: " << type << " barking" << std::endl;
}
