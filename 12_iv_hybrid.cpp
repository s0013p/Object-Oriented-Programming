#include<iostream>
using namespace std;

class A{
    public :
        int height;
    
};

class B : public A    //sigle Inheritance
{
    public:
        string name;
        
        void set(string N, int H)
        {
            name=N;
            height=H;
        }
        
        string getA()
        {
            return name;
        }
        
        int getB()
        {
            return height;
        }
};

class C : public B     //multiple Inheritance
{
    public:
        string designation;
        
        void set(string D,string N, int H)
        {
            designation=D;
            name=N;
            height=H;
        }
        
        string getA()
        {
            return name;
        }
        
        string getB()
        {
            return designation;
        }
        
        int getC()
        {
            return height;
        }
        
};

class D : public B    //multiple Inheritance
{
    public:
        int age;
        
        void set(string N, int H, int A)
        {
            name=N;
            height=H;
            age=A;
        }
        
        int getA()
        {
            return height;
        }
        
        string getB()
        {
            return name;
        }
        
        int getC()
        {
            return age;
        }
        
};

int main()
{
    B obj1;
    obj1.set("Divya",1);
    cout<<obj1.getA()<<" "<<obj1.getB()<<endl;
 
    
    C obj2;
    obj2.set("Developer","Divya",1);
    cout<<obj2.getA()<<" "<<obj2.getB()<<" "<<obj2.getC()<<endl;
    
    
    D obj3;
    obj3.set("Divya",1,5);
    cout<<obj3.getA()<<" "<<obj3.getB()<<" "<<obj3.getC()<<endl;
    

}

