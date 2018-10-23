//
//  main.cpp
//  Classes
//
//  Created by Young on 10/18/18.
//  Copyright © 2018 Young. All rights reserved.
//

#include <iostream>
#include <string>
#include "Inheritance.hpp"

using namespace std;

class Student
{
public:
    string name;
    uint age;
    
    /** constructor */
    Student()
    {
        /** 没有self,只有 this pointer*/
        this->name = "Hulu";
        age = 0;
    };
    Student(string,uint);
    
    /** destructor */
    ~Student();
    
    void show();
};

Student::~Student()
{
    cout << "Tilda" << endl;
}

Student::Student(string nameIn, uint ageIn)
{
    name = nameIn;
    age = ageIn;
};
void Student::show()
{
    cout << "Name: " << name << ",age: " << age << endl;
};

class GraduateStu: public Student
{
public:
    string job;
    void show()
    {
        cout << "Name: " << name << ",age: " << age << ",Job: " << job << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    /** 可以不用初始化,自动初始化 */
    Student s;
    s.age = 10;
    s.show();
//
//    Student t("Xiaoming", 100);
//    t.show();

    Student classroom[3];
    for (int i=0; i < 3; i++)
    {
        classroom[i].show();
    }
    
    GraduateStu g;
    g.age = 24;
    g.name = "Jobs";
    g.job = "iOS developer";
    g.show();
    
    Pet p1;
    p1.setName("Tedy");
    p1.setBreed("Pure");
    p1.setIdNumber(007);
    
    p1.show();
    
    return 0;
}
