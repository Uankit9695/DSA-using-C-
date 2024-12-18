#include<iostream>
using namespace std;
class complax
{
    int real;
    float img;
    public:
    void gatedata()
    {
        cout<<"the real part is::"<<real<<endl;
        cout<<"the img part is::"<<img<<endl;
    }
    void setdata(int a, float b)
    {
        real=a;
        img=b;
      
    }
};
int main()
{
    //complax c1;
    //complax *ptr=&c1;
    complax *ptr=new complax;
    ptr->setdata(4,5.2);//arow oprater is use to dersfrance the address;
    (*ptr).gatedata();

    //arry of pointer
    complax *ptr1=new complax[4];
    ptr1->setdata(4,5.2);//arow oprater is use to dersfrance the address;
    (*ptr1).gatedata();
}