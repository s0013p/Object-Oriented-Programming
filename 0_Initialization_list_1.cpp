//SCENARIO 1: IN CASE OF CONST VARIABLE


#include <iostream>
using namespace std;

class student{
    public :
        const int x;
        //const int x=1;
        int y;
        
        student():x(10),y(1)
        {
           // y=1;       
            cout<<"constructor called"<<endl;
        }
};

int main() {
    student s;

    return 0;
}