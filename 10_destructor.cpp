#include<iostream>
using namespace std;

class vehicle{
    public:
    string name;

    void set(string N){
        name=N;
    }

    string get(){
        return name;
    }

    vehicle(){
        cout<<"Constructor called V"<<endl;
    }


    vehicle(string S){
        cout<<"Constructor called V"<<endl;
    }

    ~vehicle(){
        cout<<"Destructor called V"<<endl;
    }

};

int main()
{
    vehicle V;         //static memory allocation

    V.set("Bullet");
    cout<<V.get()<<endl;
    
    vehicle ("alto");

    vehicle *A=new vehicle;       //dynamic memory allocation
    delete A;          //dynamic memory deallocation
}