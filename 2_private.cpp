#include<iostream>
using namespace std;

class Area{
    private:
    int radius=9;

    public:
    int get()
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    Area A;
    cout<<A.get();

    return 0;
}