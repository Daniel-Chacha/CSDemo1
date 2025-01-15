//write a program that will be  used to work as follows.
//Upon start the user asked to enter the score they got for OOP1 , the system should then inform the user whether they have passed or failed based on the following criteria
// 0-39 => Fail
// 40-49 => Pass(D)
// 50-59 => Pass(C)
// 60-69 => Pass(B)
// 70-79 => Pass(A)
// Any other score is invalid

#include <iostream>
using namespace std;

int main(){
    int score;
    char grade;

    cout << "Enter you score for OOP1: "<<endl;
    cin >> score;
    if (score <0 || score >100){
        cout << "Invalid score" << endl;
    }
    else{
        if (score<=39){
            grade= 'E';
            cout <<"Fail" << endl;
        }
        else if (score <=49)
        {
            grade= 'D';
            cout << "Pass (D)"<< endl;
        }
        else if (score <=59)
        {
            grade= 'C';
            cout << "Pass (C)"<< endl;
        }
        else if (score <=69)
        {
            grade= 'B';
            cout << "Pass (B)"<< endl;
        }
        else 
        {
            grade='A';
            cout << "Pass (A)"<< endl;
        }
    }

    cout <<"Grade: "<< grade    << endl;

    //Switch
    switch (grade)
    {
    case 'A':
        cout << "Excellent Performance" <<endl;
        break;
    
    case 'B':
        cout << "Above Average" <<endl;
        break;
    
    case 'C':
        cout << "Average" <<endl;
        break;

    case 'D':
        cout <<" Below Average" <<endl;
        break;

    case 'E':
        cout<< "Poor Performance" <<endl;
        break;
    default:
        break;
    }

    
    return 0;
}
