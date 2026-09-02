#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int a){
        x=a;
    }
    void display(){
        cout<<x<<endl;
    }
    A (const A &obj){
        x=obj.x;
        cout<<"Copy Constructor called"<<endl;
    }
    A operator=(A obj){
        x=obj.x;
        cout<<"Assignment operator called"<<endl;
        return x;
    }
    ~A(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    A a1(10),a2(20);
    a1.display();
    a2.display();
    a2=a1;
    a1.display();
    a2.display();
    return 0;
} 