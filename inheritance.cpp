#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int yob;
    public:
        Person();
        void setName() ;
        void setYob();
        string getName(){ return name; };
        int getYob(){return yob;};
        void viewDetails();
};

Person::Person(){
    cout<< "Enter Name of a person: "<<endl;
    cin >>name;
    cout <<"Enter "<< name  << "'s Year of Birth: \n";
    cin >>yob;
}

void Person::setName(){
    cout <<"Enter Name of a person: \n";
    cin >>name;
}

void Person::setYob(){
    cout <<"Enter "<< name  << "'s Year of Birth: \n";
    cin >> yob;
}

void Person::viewDetails(){
    cout<< "\n \n Name: "<< getName()  <<endl;
    cout<< "Year of Birth: "<<getYob() <<endl;
}

class Student: public Person{
    private:
        string regNo;
        double feeBal;
    
    public:
        Student();
        void setRegNo();
        void setFeeBal();
        string getRegNo(){ return regNo; };
        double getFeeBal(){return feeBal; };
        void PayFee();
        void getInfo();
};

Student::Student(){
    cout<< "Enter registration number of "<< getName() <<endl;
    cin >>regNo;
    cout << "What is the total fee of "<< getName() << endl;
    cin >>feeBal;
}

void Student::setRegNo(){
    cout<< "Enter registration number of "<< getName() <<endl;
    cin >>regNo;
}

void Student::setFeeBal(){
    cout << "What is the total fee of "<< getName() << endl;
    cin >>feeBal;
}

void Student::PayFee(){
    double amountPaid;
    cout <<"Enter amount to pay: \n";
    cin >> amountPaid;
        feeBal -=amountPaid;

    cout << "Fee Balance is :"<<getFeeBal();
}

void Student::getInfo(){
    cout<<"\n \n STUDENT DETAILS \n";
    viewDetails();
    cout <<"\n Registration Number: "<< getRegNo();
    cout << "\n Fee Balance: " << getFeeBal();
    
}

int main(){
    cout << "Creating a person object \n";
    Person p1;
    cout <<"Creating student object \n";
    Student s1;
    s1.setName();
    s1.viewDetails();
    s1.PayFee();
    s1.getInfo();
    p1.viewDetails();

    return 0;

}