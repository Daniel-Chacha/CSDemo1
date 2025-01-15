#include <iostream>
using  namespace std;
//class definition
class Circle{
    private:
    float radius;  //data member

    public:  //member functions
    Circle();
    void setRadius();
    float getRadius();
    float computeArea();
};

//external class implementation
Circle::Circle(){
    cout<< "Setting radius of a circle \n";
    cout <<"Enter the radius of the circle ";
    cin >> radius;
    cout << "Radius set successfully\n";
}

void Circle::setRadius(){
    cout<< "This will modify the radius if the circle \n";
    cout <<"Enter the new radius of the circle \n";
    cin >> radius;
    cout<< "Radius changed.";
}

float Circle::getRadius(){
    return radius;
}

float Circle::computeArea(){
    double area=radius * radius* 3.142;
    cout << "Area of circle is "<<area<<endl;
    return area;
}

int main(){
    Circle C1;  //Instantiation (creating an object)
    C1.computeArea();
    C1.setRadius();
    cout <<"The new radius is"<<C1.getRadius()<<endl;
    C1.computeArea();
}