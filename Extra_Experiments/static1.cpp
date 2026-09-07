#include<iostream>
using namespace std;
class Employee{
    static int employeeId;
    public:
    Employee(){
        employeeId++;
    }
    static void displayEmployeeId(){
        cout<<"Employee ID: "<<employeeId<<endl;
    }
};
int Employee::employeeId=0;
int main(){
    Employee e1;
    Employee e2;
    Employee e3;
    Employee::displayEmployeeId();
    return 0;
} 