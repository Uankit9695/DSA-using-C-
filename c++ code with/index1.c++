#include<iostream>
using namespace std;
class Complex
{
    private:
    int a;
    int b;
    
    public:
    void setdata(int v1, int v2 )
    {
        a=v1;
        b=v2;
        
    }
    void setdatabysum(Complex o1, Complex o2)
    {
        a=o1.a +o2.a;
        b=o1.b +o2.b;
      
    }
    void setdatabymul(Complex d1, Complex d2)
    {
        a=d1.a*d2.a;
        b=d1.b*d2.b;
    }
    void printdata()
    {
        cout<<"the add of copmlex number is="<<a<<"+"<<b<<"i"<<endl;
    }
    void printmulti()
    {
        cout<<"the multipliction of complex number is="<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex c1 ,c2, c3,c4 ,c5,c6;
    c1.setdata(1,2);
    c1.printdata();

    c2.setdata(4,5);
    c2.printdata();

    c4.setdata(8,7);
    c4.printdata();

    c3.setdatabysum(c1 , c2);
    c3.printdata();

    c6.setdatabymul(c1,c2);
    c6.printmulti();



    c5.setdatabysum(c3,c4);
    c5.printdata();

}