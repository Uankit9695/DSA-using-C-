//multiple inheritence:-
#include<iostream>
using namespace std;
class add
{
    protected:
    int a;
    int b;
    public:
    void showdata1()
    {
        cout<<"addition of two number:"<<endl;
        cout<<"a+b="<<a+b<<endl;
    }
};
class sub
{
    protected:
    int a;
    int b;
    public:
    void showdata2()
    {
        cout<<"subtrction  of two number:"<<endl;
        cout<<"a-b="<<a-b<<endl;
    }
};
class mult
{
    protected:
    int a;
    int b;
    public:
    void showdata3()
    {
        cout<<"multiplication of two number:"<<endl;
        cout<<"a*b="<<a*b<<endl;
    }
};
class input:public add,public sub,public mult
{
    protected:
    int a;
    int b;
    public:
    void gatedata()
    {
        cout<<"enter the two number a  b:"<<endl;
        cin>>a>>b;
    }

};
int main()
{
    input i1;
    i1.gatedata();
    i1.showdata1();
}