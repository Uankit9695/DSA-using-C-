// swaping of two number using friand function.
#include<iostream>
using namespace std;
class beta;
class alpha
{
    private:
    int a;
    public:
    alpha()
    {
        a=10;
    }
    friend void swapnumber(beta& ,alpha&);
    void showdata()
    {
        cout<<"number is a="<<a<<endl;
    }
};
class beta
{
    private:
    int b;
    public:
    beta()
    {
        b=20;
    }
    friend void swapnumber(beta& ,alpha&);
    void showdata()
    {
        cout<<"number is b="<<b<<endl;
    }
};
void swapnumber(beta& a1 , alpha& a2)
{
    int temp;
    temp=a2.a;
    a2.a=a1.b;
    a1.b=temp;

}
int main()
{
    alpha a;
    beta b;
    cout<<"before saping number:"<<endl;
    a.showdata();
    b.showdata();

    swapnumber(b,a);
    
    cout<<"after swaping of number:"<<endl;
    a.showdata();
    b.showdata();

}