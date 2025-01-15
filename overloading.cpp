#include <iostream>
using namespace std;

class Sample{
    private: 
        int value;
    public:
        Sample();
        Sample(int v){value = v;}
        void setValue();
        void divide(int);
        void divide(double);
        void sum(int , int );
        void sum(double , double );
        void sum(int , double );
};

Sample::Sample(){
    cout << "Enter a value \n ";
    cin >> value;
}
void Sample::sum(int x, int y){
    cout<< "The sum of "<< x << " and "<< y<< " is " << (x+y)<<endl; 
}

void Sample:: sum( double x, double y){
    cout << "The sum of "<< x << " and "<<y << " is "<< (x+y)<<endl;
}

void Sample::sum(int x, double y){
    cout << "The sum of "<< x<< " and " <<y<< " is " <<(x+y)<<endl;
}
void Sample::setValue(){
    cout<< " Editing "<< value << "to which number? \n";
    cin >> value;
}

void Sample::divide(int x){
    cout<< value << " divided by integer "<<x << " gives: "<<(value/x)<<endl;
}

void Sample::divide(double y){
    cout << value<< " divided by float "<< y << " gives: " << (value/y) << endl;
}

int main(){
    Sample S;
    // S.divide(3);
    // S.divide(3.0);
    S.sum(8,10);
    S.sum(4.4,6.8);
    // S.sum(86.9, 10);

    Sample S2(10);
    // S2.divide(3);
    // S2.divide(3.0);
    S2.sum(6,40);
    S2.sum(24.5,30.5);
    S2.sum(9, 10.8);

    return 0;
}