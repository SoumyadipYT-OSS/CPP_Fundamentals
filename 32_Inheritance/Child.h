#ifndef CHILD_H
#define CHILD_H

#include "Parent.h"
#include <string>

class Child : public Parent {
public:
    Child(const std::string& parentName, const std::string& childName);
    void introduceChild_himself_or_herself() const;
    void greet() const;

private:
    std::string childName;
};

#endif