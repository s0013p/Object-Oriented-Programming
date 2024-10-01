#include<iostream>
using namespace std;

class Employee{

    public:

    string name, dept;
    
    int id, salary;

    Employee(string name, string dept)
    {
        this->name=name;       //using this pointer
        this->dept=dept;
    }
    
    Employee(int I, int S)
    {
        id=I;               //without using this pointer
        salary=S;
    }
};

int main()
{
    Employee E("XYZ","Sales");
    cout<<E.name<<" "<<E.dept<<endl;
    
    Employee E1(1,10000);
    cout<<E1.id<<" "<<E1.salary;
}