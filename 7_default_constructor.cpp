#include<iostream>
using namespace std;

class Employee{

    public:

    int id, salary;

    Employee()
    {
        cout<<"DEFAULT CONSTRUCTOR CALLED"<<endl;
    }
    
};

int main()
{
    Employee E1;
    E1.id=1;
    E1.salary=20000;
    cout<<E1.id<<" "<<E1.salary;
}