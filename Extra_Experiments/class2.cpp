#include<iostream>
using namespace std;
class Employee
{
    int id;
    string name;
    int salary;
    public:
    Employee(int i, string n, int s)
    {
        id=i;
        name=n;
        salary=s;
    }
    friend void CompareSalary(Employee &e1, Employee &e2);
};
void CompareSalary(Employee &e1, Employee &e2)
{
    if(e1.salary > e2.salary)
    {
        cout<<"Employee "<<e1.name<<"\nID: "<<e1.id<<"\nSalary:"<<e1.salary<<"  has higher salary."<<endl;
    }
    else
    {
        cout<<"Employee "<<e2.name<<"\nID: "<<e2.id<<"\nSalary:"<<e2.salary<<"  has higher salary."<<endl;
    }
}
int main()
{
    Employee e1(101, "XYZ", 50000), e2(102, "ABC", 60000);
    CompareSalary(e1, e2);
    return 0;
}