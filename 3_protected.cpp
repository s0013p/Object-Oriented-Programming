#include<iostream>
using namespace std;

class animal{
    protected:
    string name;
    
    public:
    void get()
    {
        cin>>name;
    }
};

class dog :public animal
{
    public:
    void display()
    {
        cout<<name;
    }
};


int main()
{
    dog D;
    D.get();
    D.display();

    return 0;
}
