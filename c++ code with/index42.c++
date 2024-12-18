// #include<iostream>
// using namespace std;
// class  abc
// {
//     private:
//     int a,b,c;
//     public:
//     void gatedata()
//     {
//         cout<<"enter the number a::";
//         cin>>a;
//         cout<<"enter the nuber b::";
//         cin>>b;
//     }
//     void operator ++()
//     {
//         a=++a;
//         b=++b;

//     }
//     void operator --()
//     {
//         a=--a;
//         b=--b;
//     }
//     void showdata()
//     {
//         cout<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// int main()
// {
//     abc obj;
//     obj.gatedata();
//     --obj;
//     obj.showdata();
//     obj.operator++();
//     obj.showdata();
    

// }
// #include<iostream>
// using namespace std;
// class abc
// {
//     private:
//     int x;
//     public:
//     void gat()
//     {
//         cout<<"enter the number::";
//         cin>>x;

//     }
//     void put()
//     {
//         cout<<x;
//     }
//     friend abc operator ++(abc,int);
// };
// abc operator ++(abc obj,int a)
// {
//     abc temp;
//     obj.x++;
//     temp.x=obj.x;
//     return temp;
// }
// int main()
// {
//     abc obj1,obj2;
//     obj1.gat();
//     obj2=obj1++;
//     cout<<"after icrement"<<endl;
//     obj2.put();



// }

// #include<iostream>
// using namespace std;
// class abc
// {
//     private:
//     int x;
//     public:
//     void gate()
//     {
//         cout<<"enter the number x";
//         cin>>x;
//     }
//     bool operator ==(abc n1)
//     {
//         if(x==n1.x)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
//     bool operator !=(abc n1)
//     {
//         if(x!=n1.x)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };
// int main()
// {
//     abc obj,obj1;
//     obj.gate();
//     obj1.gate();
//     if(obj==obj1)
//     {
//         cout<<"obj is equal to obj1"<<endl;
//     }
//     else if(obj!=obj1)
//     {
//         cout<<"obj is not equal to obj1"<<endl;
//     }
//     else{
//         cout<<"exit";
//     }
// }
// #include<iostream>
// using namespace std;
// class complex
// {
//     private:
//     int real;
//     int img;
//     public:
//     void gatedada()
//     {
//         cout<<"enter the real number::";
//         cin>>real;
//         cout<<"enter the imgainary number::";
//         cin>>img;

//     }
//     void addtion(complex c1, complex c2)
//     {
//         real=c1.real+c2.real;
//         img=c1.img+c2.img;

//     }
//     complex operator +(complex c1)
//     {
//         complex temp;
//         temp.real=real+c1.real;
//         temp.img=img+c1.img;
//         return temp;
//     }
//     complex operator *(complex c1)
//     {
//         complex temp;
//         temp.real=real*c1.real-(img*c1.img);
//         temp.img=real*c1.img+(img*c1.real);
//         return temp;
//     }
//     void display()
//     {
//         cout<<real<<"+"<<img<<"i"<<endl;
//     }


// };
// int main()
// {
//     complex c1,c2,c3,c4,c5;
//     c1.gatedada();
//     c2.gatedada();
//     c3.addtion(c1,c2);
//     c4=c1+c2;
//     c5=c1*c2;
//     c3.display();
//     c4.display();
//     c5.display();
    
// }
// #include<iostream>
// using namespace std;
// class abc
// {
//     private:
//     int s;
//     public:
//     void gate()
//     {
//         cout<<"enter the number::";
//         cin>>s;
//     }
//     bool operator >(abc e)
//     {
//         if(s>e.s)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool operator <(abc f)
//     {
//         if(s<f.s)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     bool operator >=(abc e)
//     {
//         if(s>=e.s)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool operator <=(abc f)
//     {
//         if(s<=f.s)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

// };
// int main()
// {
//     abc n1,n2;
//     n1.gate();
//     n2.gate();
//     if(n1>n2)
//     {
//         cout<<"n1 is garater than n2!"<<endl;
//     }
//     else if(n1<n2)
//     {
//         cout<<"n1 is less than n2!"<<endl;
//     }
//     // else if(n1>=n2)
//     // {
//     //     cout<<"n1 is garater than equal to n2!"<<endl;
//     // }
//     else if(n1>=n2)
//     {
//         cout<<"n1 is less  than equal n2!"<<endl;
//     }
//     else{
//         cout<<"exit";
//     }
// }
#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend ostream & operator <<(ostream &o, complex &c);
    friend istream & operator >>(istream &in, complex &c);

};
ostream & operator <<(ostream &o, complex &c)
{
    o<<c.real;
    o<<"+"<<c.img;
    return o;
}
istream & operator >>(istream &in,complex &c)
{
    cout<<"real number::";
    in>>c.real;
    cout<<"imaginary number";
    in>>c.img;
    return in;
    
}
int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
    
}