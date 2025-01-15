//write a c program using classes to store and display the information of 10 employees

#include <iostream>
#include <vector>
// #include <string>
using namespace std;

class Employee{
    private:
        vector <string> names, genders, cities;
        vector <int> phoneNumbers, YOBs, YOEs;
    
    public:
        // Employee();

        void setDetails();
        void getDetails();
};

void Employee::setDetails(){
    string name , gender, city;
    int phoneNumber, yob, yEmployed;

    for(int i =0; i< 10 ; i++){
        cout<< "ENTER DETAILS FOR EMPLOYEE "<<(i+1)<<":\n";
        cout<< "Enter Employee's Name: \n";
        cin >> name;
        names.push_back(name);

        cout << "Enter Employee's Gender: \n";
        cin >> gender;
        genders.push_back(gender);

        cout << "Enter Employee's city of residence: \n";
        cin >> city;
        cities.push_back(city);

        cout <<"Enter Employee's phone number: \n" ;
        cin >> phoneNumber;
        phoneNumbers.push_back(phoneNumber);

        cout <<"Enter Employee's Year of Birth: \n";
        cin >> yob;
        YOBs.push_back(yob);

        cout << "Enter Employee's year of Employment: \n";
        cin >> yEmployed;
        YOEs.push_back(yEmployed);
    }
}

void Employee::getDetails(){
    // int arraylength= sizeof(names)/ sizeof(name[?0]);
    cout << "\n--- Employee Details ---\n";
    for (size_t i=0; i < names.size(); i++ ){
        cout << "EMPLOYEE " << (i + 1) << ":\n";
        cout << "Name: " << names[i] << "\n";
        cout << "Gender: " << genders[i] << "\n";
        cout << "City: " << cities[i] << "\n";
        cout << "Phone Number: " << phoneNumbers[i] << "\n";
        cout << "Year of Birth: " << YOBs[i] << "\n";
        cout << "Year of Employment: " << YOEs[i] << "\n\n";
    }
}

int main(){
    Employee emp;
    emp.setDetails();

    emp.getDetails();

    return 0;
}