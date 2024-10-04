#include<iostream>
using namespace std;

class Father{
    public:
        int height;
        int weight;
    
};

class son:public Father{
    public :
        string color;
        
    void set(int H, int W)
    {
        height=H;
        weight=W;
    }
    
    void setcolor(string C)
    {
        color=C;
    }
    
    int get()
    {
        return height,weight;
    }
    
    int getw()
    {
        return weight;
    }
    
    string getcolor()
    {
        return color;
    }
};

int main()
{
    son S;
    
    S.set(20,50);
    S.setcolor("white");
    
    cout<<S.get()<<" "<<S.getw()<<" "<<S.getcolor()<<endl;

}