// runtime latebinding function run time polymorephism;
#include<iostream>
using namespace std;
class baseclass
{
    public:
    int base_var;
    //public:
    void showdata()
    {
        //base_var=d;
        cout<<"base class value of base_var"<<base_var<<endl;
    }
};
class dreiveclass:public baseclass
{
    public:
    int derive_var;
    //public:
    void showdata()
    {
        cout<<"base class value of base_var"<<base_var<<endl;
        cout<<"derive class value of derive_var"<<derive_var<<endl;
    }
};
int main()
{
    baseclass *baseclass_ptr;
    baseclass obj_base;
    dreiveclass obj_derive;
    baseclass_ptr=&obj_derive;

    baseclass_ptr->base_var=45;
    baseclass_ptr->showdata();

    dreiveclass *dreiveclass_ptr;
    dreiveclass_ptr=&obj_derive;

    dreiveclass_ptr->derive_var=45;
    dreiveclass_ptr->base_var=456;
    dreiveclass_ptr->showdata();

}