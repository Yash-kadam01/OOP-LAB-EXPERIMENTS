#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    static int employeeCount;
    static int totalSalary;
    Employee(string n, int s){
        name=n;
        salary=s;
        employeeCount++;
        totalSalary=totalSalary+salary;
    }
    static void displayEmployeeCount(){
        cout<<"Total Employees: "<<employeeCount<<endl;
    }
    static void displayTotalSalary(){
        cout<<"Total Salary: "<<totalSalary<<endl;
    }
};
int Employee::employeeCount=0;
int Employee::totalSalary=0;
int main(){
    Employee e1("abc", 5000);
    Employee e2("xyz", 6000);
    Employee e3("pqr", 7000);
    Employee::displayEmployeeCount();
    Employee::displayTotalSalary();
    return 0;
}
