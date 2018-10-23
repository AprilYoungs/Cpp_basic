//
//  Inheritance.hpp
//  Classes
//
//  Created by Young on 10/23/18.
//  Copyright © 2018 Young. All rights reserved.
//

#ifndef Inheritance_hpp
#define Inheritance_hpp

#include <stdio.h>
#include <string>

class Patient
{
    int idNumber;
public:
    void setIdNumber(int idIn)
    {
        idNumber = idIn;
    }
    int getIdNumber()
    {
        return idNumber;
    }
};

class Dog
{
    std::string breed;
public:
    void setBreed(std::string breedIn)
    {
        breed = breedIn;
    }
    std::string getBreed()
    {
        return breed;
    }
};

/** multiple inheritance */
class Pet:public Patient, public Dog
{
    std::string name;
    
public:
    void setName(std::string nameIn)
    {
        name = nameIn;
    }
    std::string getName()
    {
        return name;
    }
    
    void show();
    
};

#endif /* Inheritance_hpp */
