#include <iostream>
#include <fstream>
using namespace std;

class FileIO{
    public: FileIO(){

    ofstream myfile("myText.txt", ios::app);

    myfile<< "Writing into my text file in c++ \n";
    string text;

    cout<<"Type a sentence: \n";
    getline(cin,text);

    myfile << text <<endl;

    myfile.close();

    ifstream content ("myText.txt");
    if (content.is_open()){
        string line;
        while (getline(content,line)){
            cout <<"\n"<< line<<endl;
        }
    };
    content.close();
    };
};


int main(){
    FileIO test;

    return 0;
}