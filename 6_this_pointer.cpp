#include<iostream>
using namespace std;

class Car{

    public:

    string name;

    Car(string name)
    {
        this->name=name;
        cout<<"this pointer"<<"--->"<<name<<endl;
    }

    void set(string s)
    {
        name=s;
    }

    string display()
    {
        return name;
    }
};

int main()
{
    Car C("Audii");
    C.set("BMW");
    cout<<C.display();

}