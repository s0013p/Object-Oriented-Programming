#include<iostream>
using namespace std;

class car{
    public:
    string name;
    int no;

    void get()
    {
        cout<<"Enter the name of the car: ";
        cin>>name;
        cin.ignore();
        cout<<"Enter the number of the car: ";
        cin>>no;

        cout<<name<<" "<<no;

    }
};

int main()
{
    car C;
    C.get();

    return 0;
}
