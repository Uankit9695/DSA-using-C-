#include<iostream>
using namespace std;
class complex
{
    private:
    int a;
    int b;
    public:
    void setdata(int a1 ,int b1)
    {
        a=a1;
        b=b1;
    }
    friend complex setdatasum(complex o1, complex o2);
    void printdata()
    {
        cout<<"the complex number is ="<<a<<"+"<<b<<"i"<<endl;
    }
};
complex setdatasum(complex o1 ,complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a) , (o1.b+o2.b));
    
}
int main()
{
    complex c1,c2,sum;
    c1.setdata(1,2);
    c1.printdata();

    c2.setdata(4,5);
    c2.printdata();

    sum=setdatasum(c1,c2);
    sum.printdata();
    return 0;
}