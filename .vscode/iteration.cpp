#include <iostream>
using namespace std;

int main(){
    int num1, num2,num3, sum;

    //Do while loop
    do{
        cout << "Enter a number: " <<endl;
        cin >> num1;

        cout << "Enter another number: " <<endl;
        cin >> num2;

        sum= num1+num2;
        cout << "Sum " << sum <<endl;
    }while (sum< 100);

    cout <<"End of execution" <<endl;

    //while loop
    cout << "Enter a number 1: " <<endl;
    cin >> num1;

    cout << "Enter a second number: " <<endl;
    cin >> num2;
    sum=num1+num2;
    cout<< "Sum: "<<sum<< endl;

    while (sum<100){
        cout << "Enter another number: "<<endl;
        cin >> num3;
        sum+=num3;
        cout << "Sum:" <<sum<<endl;
    }

    //For loop
    for (int x=1; x<=10; x++){
        cout << x << ",";
    }
    return 0;
}