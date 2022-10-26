#include<bits/stdc++.h>
using namespace std;


template <class T>
class Super {
    int length;
    int time;
    T data;
};

class Base {
    public:
    int level;

    virtual void print(){
        cout << "Hello\n";
    }

    Base(int level=0){
        this->level = level;
        cout << "creating base\n ";
    }

    Base(Base& t){
        this->level = t.level;
        cout << "Copy constructor called\n";
    }

    ~Base(){
        cout<< "Destroying base\n";
    }

};

class Child : public Base {
    public: 


    void set(){
        level = 5;
    }

    void print(){
        cout << "Hello from child\n";
    }

    void hello(string name){
        cout << "hello " + name +"\n";
    }

    Child(int level=0){
        this->level = level;
        cout << "creating child \n";
    }


    ~Child(){
        cout<< "Destroying chilld\n ";
    }
    

};


int main(){
    Base* b;
    Child c;
    b= &c;
    cout << sizeof(c);
}