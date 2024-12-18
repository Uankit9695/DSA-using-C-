#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    float salary;
    public:
    void gatedata()
    {
        cout<<"enter the id of the employee:"<<endl;
        cin>>id;
        cout<<"enter the name of the employee:"<<endl;
        cin>>name;
        cout<<"enter the salry of the employee:"<<endl;
        cin>>salary;
    } 
    void showdata()
    {
        cout<<"ID of the employee="<<id<<endl;
        cout<<"name of the employee="<<name<<endl;
        cout<<"salary of the employee="<<salary<<endl;
        cout<<"\n\n";
    }

};
int main()
{
    employee e1[10];
    e1->gatedata();
    e1->showdata();
    e1->gatedata();
    e1->showdata();
    e1->gatedata();
    e1->showdata();
    return 0;
}