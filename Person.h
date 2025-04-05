#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
public:
    Person(std::string name) : name_(std::move(name)) {}
    virtual ~Person() = default;
    
    std::string getName() const { return name_; }
    virtual void printRole() const = 0;  // Pure virtual function

private:
    std::string name_;
};

#endif
