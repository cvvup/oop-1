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

    double square(){
        return a * b;
    }
    double perimeter(){
        return 2 * (a + b);
    }
private:
    double a{1.0};
    double b{2.0};
};

int main(){
    Rectangle rectangle1;
    std::cout << rectangle1.square() << std::endl;

    Rectangle rectangle2(5.0, 3.9);
    std::cout << rectangle2.square() << std::endl;
}