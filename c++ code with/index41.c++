// // ammbiguty inheritence in hayprid inhaeritence.
// #include<iostream>
// using namespace std;
// class a
// {
//     protected:
//     int x;
//     int y;
//     public:
//     void gatedata(int a, int b)
//     {
//         x=a;
//         y=b;
//     }
//     void showdata()
//     {
//         cout<<"addition of x+y="<<x+y<<endl;
//     }
// };
// class b: virtual public a
// {
//     public:
//     // void gatedata1(int a, int b)
//     // {
//     //     x=a;
//     //     y=b;
//     // }
//      void showdata1()
//     {
//         cout<<"milti of x*y="<<x*y<<endl;
//     }

// };
// class c: virtual public a
// {
//     public:
//     // ///void gatedata2(int a, int b)
//     // {
//     //     x=a;
//     //     y=b;
//     // }
//     void showdata2()
//     {
//         cout<<"substrection of x-y="<<x-y<<endl;
//     }
// };
// class d: public b, public c
// {
//     public:
//     int result;
//     void showdata4()
//     {
//         gatedata(4,8);
//        // gatedata1(4,3);
//         //gatedata2(8,5);
//         showdata();
//         showdata1(); 
//         showdata2();

//     }
// };
// int main()
// {
//     d obj;
//     obj.showdata4();
//     // obj.showdata();
//     // obj.gatedata1(2,4);
//     // obj.showdata1();
// }
// #include<iostream>
// using namespace std;
// class base
// {
//     public:
//     void print()
//     {
//         cout<<"base class!"<<endl;
//     }
// };
// class derive:public base
// {
//     public:
//     void print()
//     {
//         cout<<"derive calss!"<<endl;
//         base::print();

//     }
// };
// int main()
// {
//     derive d1,d2;
//     d1.print();
//     //d2.base::print();

// }

#include<iostream>
using namespace std;
class outer
{
    private:
    int x;
    public:
    class inner
    {
        public:
        void print()
        {
            outer obj;
            obj.x=20;
            obj.display();
        }

    };
    void display()
    {
        cout<<"from inner x="<<x;
    }
};
int main()
{
    outer::inner i1;
    i1.print();
}