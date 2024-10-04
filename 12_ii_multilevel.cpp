#include<iostream>
using namespace std;

class A{
    public :
        int height;
    
};

class B : public A               //Level 1 inheritance
{
    public:
        int weight;
};

class C :public B               //Level 2 inheritance
{
    public:
        int age;
        
        void set(int height,int W, int A)
        {
            this->height=height;
            weight=W;
            age=A;
        }
        
        int getA()
        {
            return height;
        }
        
        int getB()
        {
            return weight;
        }
        
        int getC()
        {
            return age;
        }
        
};

int main()
{
    C obj;

    obj.set(1,2,3);
    cout<<obj.getA()<<" "<<obj.getB()<<" "<<obj.getC()<<endl;
}