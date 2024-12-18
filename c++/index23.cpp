#include<iostream>
using namespace std;
class baseclass
{
    public:
    int base_var=10;
    //public:
    virtual void showdata()
    {
        //base_var=d;
        cout<<"1 base class value of base_var::"<<base_var<<endl;
    }
};
class dreiveclass:public baseclass
{
    public:
    int derive_var=8;
    //public:
    void showdata()
    {
        cout<<"2 base class value of base_var::"<<base_var<<endl;
        cout<<"2 derive class value of derive_var::"<<derive_var<<endl;
    }
};
int main()
{
    baseclass *bptr;
    baseclass obj_base;
    dreiveclass obj_drive;
    bptr=&obj_drive;
    bptr->showdata();

    

}