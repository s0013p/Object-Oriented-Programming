#include<iostream>
using namespace std;

class Car{
    private:
    string name;

    public:
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
    //static allocation
    Car C;
    C.set("BMW");
    cout<<C.display();

}