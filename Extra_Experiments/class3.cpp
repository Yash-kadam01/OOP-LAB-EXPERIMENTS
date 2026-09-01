#include<iostream>
using namespace std;
class Student
{
    private:
    int Math,English,Science;
    public:
    Student(int i,int j, int k)
    {
        Math=i;
        English=j;
        Science=k;
    }
    void display()
    {
        cout<<"Maths Marks:"<<Math<<"\nEnglish Marks:"<<English<<"\nScience Marks:"<<Science<<endl;
    }
    friend class Result;
};
class Result
{
    public:
    void dispalyResult(Student n1)
    {
        int total;
        total=n1.Math+n1.English+n1.Science;
        cout<<"Total Marks:"<<total;
    }
};
int main()
{
    Student n1(20,30,40);
    Result r1;
    n1.display();
    r1.dispalyResult(n1);
    return 0;
}
