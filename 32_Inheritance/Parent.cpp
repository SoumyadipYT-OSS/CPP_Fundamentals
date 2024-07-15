#include "Parent.h"
#include <iostream>

Parent::Parent(const std::string& name) : name(name) {}

void Parent::introduce() const {
    std::cout << "Hello, my name is " << name << "." << std::endl;
}