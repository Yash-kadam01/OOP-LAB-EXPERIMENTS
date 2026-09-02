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
    bool operator==(A obj){
        return x==obj.x;
    }
};
int main(){
    A a1(10),a2(10);
    if(a1==a2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }
    return 0;
}