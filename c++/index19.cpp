#include<iostream>
using namespace std;
class shop
{
    int id;
    float price;
    public:
    void setdata(int a, float b)
    {
        id=a;
        price=b;
    }
    void gatedata()
    {
        cout<<"code of this itam is="<<id<<endl;
        cout<<"price of the itam is="<<price<<endl;
    }
};
int main()
{
    int size=5;
    shop *ptr=new shop[size];
    shop *ptrtamp=ptr;
    int a;
    float b;
    for(int i=0;i<size;i++)
    {
        cout<<"enter id and price of the itam::"<<i+1<<endl;
        cin>>a>>b;
        ptrtamp->setdata(a,b);
        ptr++;
    }
    for(int i=0;i<size;i++)
    {
        cout<<"itam number:"<<i+1<<endl;
        ptrtamp->gatedata();

    }
}