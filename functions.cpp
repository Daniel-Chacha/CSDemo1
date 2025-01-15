#include <iostream>
#include <cstdlib>
using namespace std;

void sum(int x, int y)
{
    int total = x + y;
    cout << "Sum of " << x << " and " << y << " is " << total << endl;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void square(char symbol, int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j=1; j<=size; j++){
            cout << symbol;
        }
        cout << endl;
    }
    // drawing();
}
void triangle(char symbol, int size) {
    for (int i=1;i<=size; i++){
        for (int j=1;j<=i; j++){
            cout<< symbol;
        }
        cout << endl;
    }
}
void invertedTriangle(char symbol, int size) {
    for (int i=size;i>0;i--){
        for (int j=1;j<=i;j++){
            cout <<symbol;
        }
        cout <<endl;
    }
}

void drawing()
{
    int choice, size;
    char symbol;
    cout << "PATTERN CREATION \n\n 1.Square\n 2.Triangle\n 3.Inverted Triangle\n 4.Exit \n";
    cout << "Enter the number of your pattern of choice: " << endl;
    cin >> choice;
    if (choice ==1 || choice ==2 || choice ==3){
        cout<< "Enter the symbol to use: "<<endl;
        cin >> symbol;
        cout <<"Enter the size of your pattern: "<<endl;
        cin >>size;

        // cout << "Inputs: " << symbol << size << endl;
        switch(choice)
        {
        case 1: square(symbol,size);
            break;
        case 2: triangle(symbol,size);
            break;
        case 3: invertedTriangle(symbol,size);
            break;
        }
    }
    else if (choice == 4){
        exit(0);
    }else {
        cout << "Invalid choice\n Please Try Again!"<<endl;
        drawing();
    }

}

int main()
{
    drawing();

    return 0;
}