#include<bits/stdc++.h>
using namespace std;


template <class T>
class Super {
    public:
    T id;

    Super(){

    }

    Super(T id){
        this->id = id;
    }

    bool operator == (const Super<T> &s){
        return id == s.id;
    }

    T operator + (const int a){
        return id+a;
    }
};

class Base {
    public:
    int level;

    void print(){
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

    void hello(){
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
    Super<float> s(1);
    Super<float> s1(1);
    Super<float> x = s1+7;
    bool t = s == s1 ;
    cout <<t << " " << x.id;
    // c3.print();
    // Child b;
    // b.hello("prakash");
}