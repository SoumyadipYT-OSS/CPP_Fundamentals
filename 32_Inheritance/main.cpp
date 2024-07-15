#include "Parent.h"
#include "Child.h"
#include <iostream>

int main() {
    Parent p("John");
    p.introduce();

    Child c("John", "Emily");
    c.introduce();  // this will print "Hello, my name is John." because the introduce() method is inherited from the Parent class
    c.introduceChild_himself_or_herself(); // this will print "Hello, my name is Emily."
    c.greet();  // this will print "Hi there! I'm the child of John," and "my name is Emily."

    return 0;
}
