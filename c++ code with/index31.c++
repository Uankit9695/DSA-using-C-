// this ponter;
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void setdata(int a)
    {
        //a=a; = at that it give garbej value;
        this->a=a;
    }
    void showdata()
    {
        cout<<"a="<<a<<endl;
    }
};
int main()
{
    A a;
    a.setdata(6);
    a.showdata();
}