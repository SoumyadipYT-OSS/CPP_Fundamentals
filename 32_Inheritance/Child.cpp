#include "Child.h"
#include <iostream>

Child::Child(const std::string& parentName, const std::string& childName)
    : Parent(parentName), childName(childName) {}

void Child::introduceChild_himself_or_herself() const {
    std::cout << "Hello, my name is " << Child::childName << "." << std::endl;
}

void Child::greet() const {
    std::cout << "Hi there! I'm the child of " << Child::Parent::name << "," << std::endl
              << " and my name is " << Child::childName << "." << std::endl;
}