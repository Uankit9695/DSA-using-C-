// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=10 ;
//     int *ptr =&n;
//     //cout<<ptr;

//     int *p= new int(20);
//     cout<<*(p);
// }

// #include<iostream>
// using namespace std;
// class complex
// {
//     private:
//     int r;
//     int i;
//     public:
//     void gatedata()
//     {
//         cout<<"real part is="<<r<<endl;
//         cout<<"img part is="<<i<<endl;
//     }
//     void setdata(int a, int b)
//     {
//         r=a;
//         i=b;
//     }

// };
// int main()
// {
//     // complex c1;
//     // complex *ptr=&c1;
//     complex *ptr=new complex;
//     (*ptr).setdata(4,5);
//     (*ptr).gatedata();

// }

// #include<iostream>
// using namespace std;
// class shop
// {
//     protected:
//     int id;
//     int price;
//     public:
//     virtual void gatedata()
//     {
//         cout<<"enter the id and price::"<<endl;
//         cin>>id>>price;
//     }
//     void showdata()
//     {
//         cout<<"price and id::"<<price<<"::"<<id<<endl;
//     }

// };
// class dukan: public shop
// {
//     protected:
//     string name;
//     public:
//     void gatedata()
//     {
//         cout<<"enter the name::";
//         cin>>name;
//         cout<<"enter the id and price::"<<endl;
//         cin>>id>>price;
//     }
//      void showdata()
//      {
//          cout<<name<<endl;
//         cout<<"price and id::"<<price<<"::"<<id<<endl;

//     }

// };
// int main()
// {
//     shop *ptr;
//     dukan d1;
//     ptr=&d1;
//     ptr->gatedata();
//     ptr->showdata();
//     d1.showdata();
// }

#include<iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void gatenumber(int a)
    {
        roll=a;
    }
    void printnumber()
    {
        cout<<"roll number is::"<<roll<<endl;
    }
};
class marks: virtual public student
{
    protected:
    int maths ,physices;
    public:
    void gatemarks(int a, int b)
    {
        maths=a;
        physices=b;
    }
    void printmarks()
    {
        cout<<"marks of maths="<<maths<<endl
        <<"marks of physics ="<<physices<<endl;
    }
};
class sport:virtual public student
{
    protected:
    int score;
    public:
    void gatescore(int sc)
    {
        score=sc;
    }
    void printscore()
    {
        cout<<"sport score is="<<score<<endl;
    }
};
class result:public marks, public sport
{
    private:
    int total;
    public:
    void display()
    {
        total=maths+physices+score;
        printnumber();
        printmarks();
        printscore();
        cout<<"total marks is="<<total;
    }


};
int main()
{
    result r1;
    r1.gatenumber(30);
    r1.gatemarks(45,63);
    r1.gatescore(96);
    r1.display();
}
