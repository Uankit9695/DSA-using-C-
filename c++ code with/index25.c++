#include<iostream>
using namespace std;
class base
{
    protected:
    int a ,b;
    public:
    base(int x, int y)
    {
        cout<<"it is base class::"<<endl;
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a*b:"<<a*b<<endl;
    }
};
class derive:public base
{
    protected:
    int c;
    public:
    derive(int p, int q, int z):base(p,q)
    {
        cout<<"it is derive class::"<<endl;
        c=z;
    }
    void showdata()
    {
        cout<<"(a*b)+c:"<<(a*b)+c<<endl;
    }

};
int main()
{
    derive d1 (4,5,6);
    d1.showdata();
}