//
//  Polymorphism.hpp
//  Classes
//
//  Created by Young on 10/23/18.
//  Copyright © 2018 Young. All rights reserved.
//

#ifndef Polymorphism_hpp
#define Polymorphism_hpp

#include <iostream>
#include <string>

class Animal {
public:
    std::string type;
    
    virtual void bark();
};

class Cat: public Animal {
public:
    void bark();
};


#endif /* Polymorphism_hpp */
