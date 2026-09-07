#include<iostream>
using namespace std;
class Employee{
    static int employeeId;
    public:
    Employee(){
        employeeId++;
        cout<<"Employee ID: "<<employeeId<<endl;
    }
};
int Employee::employeeId=0;
int main(){
    Employee e1;
    Employee e2;
    Employee e3;
    return 0;
} 