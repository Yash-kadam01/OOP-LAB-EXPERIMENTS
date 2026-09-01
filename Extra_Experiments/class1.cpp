#include<iostream>
using namespace std;
class Number
{
    int value;
    public:
    Number(int v)
    {
        value=v;
    }
    void display()
    {
        cout<<"Value: "<<value<<endl;
    }
    friend void SwapNumbers(Number &n1, Number &n2);
};
void SwapNumbers(Number &n1, Number &n2)
{
    int temp=n1.value;
    n1.value=n2.value;
    n2.value=temp;
}
int main()
{
    Number n1(10), n2(20);
    n1.display();
    n2.display();
    SwapNumbers(n1, n2);
    n1.display();
    n2.display();
    return 0;
}