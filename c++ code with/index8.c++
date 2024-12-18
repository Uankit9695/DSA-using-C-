#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    int b;
    
};
class add:public base
{
    protected:
    int c;
    public:
    void showdata()
    {
        cout<<"addition oftwo number:"<<endl;
        c=a+b;
        cout<<"a+b="<<c<<endl;
    }
};
class sub:public base
{
    protected:
    int d;
    public:
    void showdata()
    {
        cout<<"subtrection of two number:"<<endl;
        d=a-b;
        cout<<"a-b="<<d<<endl;
    }
};
class multi:public base
{
    protected:
    int e;
    public:
    void showdata()
    {
        cout<<"multipication of the number:"<<endl;
        e=a*b;
        cout<<"a*b="<<e<<endl;

        
    }
};
class input:public base
{
    public:
    void gatedata()
    {
        cout<<"enter the two numbera and b:"<<endl;
        cin>>a;
        cin>>b;


    }
};

int main()
{
    input i1;
    i1.gatedata();
    
    return 0;
    
}