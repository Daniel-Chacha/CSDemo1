#include <iostream>
using namespace std;

int main(){
    int len, val;
    

    cout <<"How many numbers do you want to key in? \n";
    cin >>len;

    int myarray[len]={};

    for (int i=0; i<len; i++){
        cout << "Enter the "<<i+1<< " number: ";
        cin >> val;
        myarray[i]=val;
    }

    for (int i=0; i<sizeof(myarray);i++){
        cout << myarray[i];
    }
}