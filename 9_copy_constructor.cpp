#include<iostream>
using namespace std;

class Student{

    public:
        string name, dept;
        
        Student(Student& t)      //pass by reference
        {
            cout<<"copy constructor called"<<endl;
            // name=t.name;
            // dept=t.dept;
            
            this->name=t.name;
            this->dept=t.dept;
            cout<<name<<" "<<dept<<endl;
        }
        
        Student(string N, string D)
        {
            name=N;
            dept=D;
            cout<<name<<" "<<dept<<endl;
        }
    
};

int main()
{
    Student T("Abc","Sales");
    
    Student S(T);   //copy constructor called
}