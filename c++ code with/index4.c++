#include<iostream>
using namespace std;
class employee
{
    protected:
    int id;
    string name;
    float salary;
    public:
    employee()
    {
        cout<<"defult construct in base class"<<endl;
        id=0;
        name="null";
        salary=0.0;
    }
    employee(int idd, string nm , float sly)
    {
        cout<<"pairamit construct in base class:"<<endl;
        id=idd;
        name=nm;
        salary=sly;
    }
};
class newemployee:public employee
{
    protected:
    string department;
    public:
    newemployee():employee()
    {
        cout<<"defult construct in derived class:"<<endl;
        department="null";
    }
    newemployee(int idd,string nm, float sly, string dep):employee(idd,nm,sly)
    {
        cout<<"pirametrise construct in derived class:"<<endl;
        department=dep;
    }
    void getdata()
    {
        cout<<"enter the ID of the emp:"<<endl;
        cin>>id;
        cout<<"enter the name of the emp:"<<endl;
        cin>>name;
        cout<<"enter the salary of the emp:"<<endl;
        cin>>salary;
        cout<<"enter the department of the emp:"<<endl;
        cin>>department;
    }
    void showdata()
    {
        cout<<"ID is="<<id<<endl;
        cout<<"name is="<<name<<endl;
        cout<<"salary is="<<salary<<endl;
        cout<<"department is="<<department<<endl;
    }
};
int main()
{
    newemployee e1;
    e1.showdata();
    e1.getdata();
    e1.showdata();

}