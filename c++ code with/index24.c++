#include<iostream>
#include<cmath>
using namespace std;
class simplecalculater
{
    int a,b;
    public:
    void gatedata()
    {
        cout<<"enter the number a:"<<endl;
        cin>>a;
        cout<<"enter the number b:"<<endl;
        cin>>b;
    }
    void performdata()
    {
        cout<<"the value of a+b:"<<a+b<<endl;
        cout<<"the value of a-b:"<<a-b<<endl;
        cout<<"the value of a*b:"<<a*b<<endl;
        cout<<"the value of a/b:"<<a/b<<endl;
    }
};
class santificcalculater
{
    int a,b;
    public:
    void gatedata()
    {
        cout<<"enter the number a:"<<endl;
        cin>>a;
        cout<<"enter the number b:"<<endl;
        cin>>b;
    }
    void performdata()
    {
        cout<<"the value of sin(a):"<<sin(a)<<endl;
        cout<<"the value of cos(a):"<<cos(a)<<endl;
        cout<<"the value of exp:"<<exp(a)<<endl;
        cout<<"the value of log(b):"<<log(b)<<endl;
        cout<<"the value of tan(a+b):"<<sin(a+b)<<endl;
    }

} ;
int main()
{
    santificcalculater s2;
    s2.gatedata();
    s2.performdata();
}