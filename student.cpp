#include <iostream>
using namespace std;

class Student{
    private:
    string reg_No;
    string name;
    int yOfStudy;
    float feeBalance=90000, feePaid;

    public:
    Student();
    void makePayment();
    float checkBalance(){ return feeBalance; };
    void viewDetails();
};

Student::Student(){
    cout <<"CREATING A NEW STUDENT RECORD: \n";
    cout <<"Enter your registration number: ";
    cin >> reg_No;
    cout<<"Enter your name: ";
    cin >>name;
    cout <<"Enter your year of study: ";
    cin >> yOfStudy;
}

void Student::makePayment(){
    cout << "Making Fee Payment \n";
    cout <<"Enter amount: "; 
    cin >> feePaid;
    cout <<"\n Fee Amount "<<feePaid << " paid successfully \n";
    feeBalance -=feePaid;
    cout << "The fee balance is "<< checkBalance()<<endl;
};

void Student::viewDetails(){
    cout<< "Registration No.: "<< reg_No<< "\n Name: "<<name <<"\n Year of Study:"<< yOfStudy <<endl;
}

int main(){
    int choice;
    Student student1;

    cout<< "What to do?: \n";
    cout <<"1. View Details \n2. Pay Fee\n 3.Check Balance \n 4.Exit\n";
    cin >>choice;

    void menu(){
        switch(choice){
        case 1:
            student1.viewDetails();
            break;
        case 2:
            student1.makePayment();
            break;
        case 3:
            student1.checkBalance();
            break;
        case 4:
            break;
        };

    };

   
};