#include<iostream>
using namespace std;
class swaping
{
    private:
    int a;
    int b;
    public:
    void getdata();
    void setdata();
    void showdata();
};
void swaping::getdata()
{
    cout<<"enter the two number\n";
    cin>>a>>b;
}
void swaping::setdata()
{
    cout<<"before swaping thenumber\n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
void swaping::showdata()
{
    cout<<"after swaping the number:\n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main()
{
    swaping s;
    s.getdata();
    s.setdata();
    s.showdata();
    return 0;
}