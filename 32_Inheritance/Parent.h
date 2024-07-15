#ifndef PARENT_H
#define PARENT_H

#include <string>

class Parent {
public:
    Parent(const std::string& name);
    void introduce() const;

protected:
    std::string name;
};

#endif
