// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class num{
    protected:
    int A;
    char ch1;
};

class num1: public num{
    
    char ch2;
    int B;
};

int main() {
    cout<<sizeof(num)<<endl;
    cout<<sizeof(num1);

    return 0;
}