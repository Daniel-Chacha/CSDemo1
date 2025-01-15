#include <iostream>
using namespace std;

class Demo ;// class prototype;

class MyFriends{
    private: string name;

    public: 
        MyFriends(){
        name = "from constructor";}

        void getName(){
        cout<<"The name is "<<name <<endl;
    };

    friend void Sample(MyFriends&);
    friend  Demo;
};

void Sample(MyFriends &K){
    K.name = "From Sample";
    K.getName();
}

class Demo{
    public:
    void demo1(){
        MyFriends fd;
        fd.getName();
        fd.name = "From demo1 \n";
        fd.getName();
    }

    void demo2(MyFriends f){
        f.getName();
        f.name ="From demo2 \n";
        f.getName();
    }
};

int main(){
    MyFriends Mf;
    Mf.getName();

    Sample(Mf);
    Mf.getName();

    Demo d;
    d.demo1();
    d.demo2(Mf);

    return 0;
}