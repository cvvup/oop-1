#include <iostream>

//Tuesday's homework by class

class Rectangle{

public:
    Rectangle(){
        a = 2.7;
        b = 5.3;
    } //default

    Rectangle(double newA, double newB){
        a = newA;
        b = newB; 
    }

    void serDimensions(double newA, double newB){
        a = newA;
        b = newB;
    }

    double square(){
        return a * b;
    }
    double perimeter(){
        return 2 * (a + b);
    }
private:
    double a; //horizontal length
    double b; //vertical length
};

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
