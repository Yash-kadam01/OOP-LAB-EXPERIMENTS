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
    A operator+(A obj){
        A temp(0);
        temp.x=x+obj.x;
        return temp;
    }
};
int main(){
    A a1(10),a2(20);
    A a3=a1+a2;
    a1.display();
    a2.display();
    a3.display();
    return 0;
}