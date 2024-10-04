
#include <iostream>
using namespace std;

class student{
    public :
        int &T;
        
        student(int &S):S(T)
        {
   
            cout<<"constructor called"<<endl;
        }
        
        int get()
        {
            return T;
        }
};

int main() {
    int x=0;
    student S(x);
    cout<<S.get();

    return 0;
}