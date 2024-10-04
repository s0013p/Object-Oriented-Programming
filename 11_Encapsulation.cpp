#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        

    public:
        int roll_no=5;

        void setname(string name,int roll_no)
        {
            this->name=name;
            this->roll_no=roll_no;
        }

        string get()
        {
            return name;
        }
    
};

int main()
{
    Student S;
  //  S.name; // This will give error as name is private
    cout<<S.roll_no<<endl;
    
    S.setname("john",1);
    cout<<S.get()<<endl;
}
