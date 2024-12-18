//hybrid inheritence
#include<iostream>
using namespace std;
class base
{
    protected:
    int i;
    public:
    base()
    {
        cout<<"base class const:"<<endl;
        i=10;
    }

};
class alpha:public base
{
    protected:
    int j;
    public:
    alpha()
    {
        cout<<"alpha class constr:"<<endl;
        j=20;
    }
};
class beta
{
    protected:
    int k;
    public:
    beta()
    {
        cout<<"beta class const:"<<endl;
        k=30;
    }
};
class gama: public alpha,public beta
{
    protected:
    int sum;
    public:
    gama()
    {
        cout<<"gama class const:"<<endl;
        sum=i+j+k;
    }
    void display()
    {
        cout<<"sum of the number is ="<<sum<<endl;
    }
};
int main()
{
    gama g1;
    g1.display();
}
