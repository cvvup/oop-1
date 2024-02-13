#include <iostream>
#include "rectangle.hpp"

int main(){
    Rectangle rectangle1;
    std::cout << rectangle1.square() << std::endl;

    Rectangle rectangle2(5.0, 3.9);
    std::cout << rectangle2.square() << std::endl;
}