#include "comment.hpp"

class Rectangle{

public:
    Rectangle(){
        a = 2.7;
        b = 5.3;
    } 

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
    double a; 
    double b; 
};