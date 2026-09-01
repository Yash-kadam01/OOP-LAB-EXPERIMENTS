#include<iostream>
using namespace std;
class Student
{
    string name;
    int Roll_No;
    int Math,Science,English;
    public:
    void getdata()
    {
    cout<<"Enter the Name of the Student:";
    cin>>name;
    cout<<"Enter the Roll_No of the Student:";
    cin>>Roll_No;
    cout<<"Enter Marks of Math:";
    cin>>Math;
    cout<<"Enter Marks of Science:";
    cin>>Science;
    cout<<"Enter Marks of English:";
    cin>>English;
}
    friend class Result;
};
class Result
{
    public:
    void displaydata(Student n1)
    {
        cout<<"Name:"<<n1.name<<"\nRoll_no:"<<n1.Roll_No<<"\nMath Marks:"<<n1.Math<<"\nScience Marks:"<<n1.Science<<"English Marks"<<n1.English<<endl;
    }
};
int main()
{
    Student n1;
    Result r1;
    n1.getdata();
    r1.displaydata(n1);
    return 0;
    cout<<endl;
}