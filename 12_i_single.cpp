#include<iostream>
using namespace std;

class Father{
    public:
        int height;
    
};

class son:public Father{
    public :
        string color;
        
    void set(int H)
    {
        height=H;

    }
    
    void setcolor(string C)
    {
        color=C;
    }

    int get()
    {
        return height;
    }

    string getcolor()
    {
        return color;
    }
};

int main()
{
    son S;
    
    S.set(20);
    S.setcolor("white");
    
    cout<<S.get()<<" "<<S.getcolor()<<endl;

}