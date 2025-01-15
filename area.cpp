#include <iostream>
using namespace std;

class Polygon{
    protected:
        double length, width;
    
    public:
        Polygon();
        virtual void getArea()=0;
};

class Rectangle: public Polygon{
    public:
    void getArea();
};

class Triangle: public Polygon{
    public:
    void getArea();
};

Polygon::Polygon(){
    cout<< "----AREA CALCULATOR-----\n";
    cout <<"Enter length: \n";
    cin >>length;

    cout << "Enter width: \n";
    cin >>width;
}

void Rectangle::getArea(){
    cout <<"Area of the rectangle is "<< (length*width) <<endl;
    // int area =length*width ;
}

void Triangle::getArea(){
    cout <<"Area of the rectangle is "<< (0.5*length*width) <<endl;
    // int area = 0.5*length*width;
}

int main(){
    cout <<"Rectangle Dimensions: \n";
    Rectangle R1;

    cout <<"Triangle Dimensions: \n";
    Triangle T1;

    R1.getArea();
    T1.getArea();
}