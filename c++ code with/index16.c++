//oprater overload function and over load data member ;
#include<iostream>
using namespace std;
class complex 
{
    private:
    int real;
    float img;
    public:
    complex()
    {
        real=0;
        img=0.0;
    }
    void gatedata(int r, float im)
    {
        real=r;
        img=im;
    }
    void gatedata()
    {
        cout<<"enter the real part"<<endl;
        cin>>real;
        cout<<"enter the img part"<<endl;
        cin>>img;
    }
    void add(complex c1, complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    complex operator *(complex d)
    {
        complex temp2;
        temp2.real=real*d.real-(img*d.img);
        temp2.img=real*d.img+(img*d.real);
        return temp2;
    }

};
int main()
{
    complex c1,c2,c3,c4,c5;
    c3.gatedata();
    c4.gatedata(2,3.0);
    c3.display();
    c4.display();
    //c1.add(c3,c4);
    c1=c3+c4;
    c1.display();
    
    c4=c3*c4;
    c4.display();


}