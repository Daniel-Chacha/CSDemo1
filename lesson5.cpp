#include <iostream>
using namespace std;

class Demo{
    private:
        int number;
    public:
        Demo();
        static void setNumber();
        void setNumber2();
         int getNumber(){return number ;}
};


//class implementation
// int Demo::number =0;
Demo::Demo(){
    cout<< "Enter a number: \n";
    cin >> number;
    cout<< "The constructor has set the number to "<< number <<endl;
}

// void Demo:: setNumber(){
//     cout << "Static Method setting the number . \n Enter a number: \n";
//     cin >> number;
//     cout <<"The number is now "<<number <<endl;
// }

void Demo:: setNumber2(){
    cout << "Instance method setting the number . \n Enter a number: ";
    cin >> number;
    cout << "The number is now "<<number<< endl;
}
 int main(){
    // cout << "Initial number is " <<Demo::getNumber() << endl;
    Demo d1;
    // d1.setNumber();
    // d1.setNumber2();

    cout << "Number is now: " <<d1.getNumber() << endl;
    Demo d2;
    cout << " number is now :" <<d2.getNumber() << endl;
    cout << "d1 number is :" <<d1.getNumber() << endl;

    return 0;
 }