#include <iostream>
#include "rectangle.hpp"
#include "comment.hpp"

int main(){
    double a,b;
    std::cout << "Enter the horizontal: ";
    std::cin >> a;
    std::cout << "Enter the vertical: ";
    std::cin >> b;

    Rectangle rectangle1;
    std::cout << "Square: " << rectangle1.square() << std::endl;

    Rectangle rectangle2(a, b);
    std::cout << "Perimeter: " << rectangle2.perimeter() << std::endl;
}