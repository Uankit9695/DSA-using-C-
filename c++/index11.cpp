#include<iostream>
using namespace std;
class employee
{
    private:
    char name[10];
    int Id;
    char desg[10];
    float sallary;
    public:
    void gatedata();
    void showdata();

};
void employee::gatedata()
{
    cout<<"enter the name of the employee:"<<endl;
    cin>>name;
    cout<<"enter the id of the employee:"<<endl;
    cin>>Id;
    cout<<"enter the designation of employee:"<<endl;
    cin>>desg;
    cout<<"enter the sallary of the employee:"<<endl;
    cin>>sallary;
    
}
void employee::showdata()
{
    cout<<"name       ="<<name<<endl;
    cout<<"ID         ="<<Id<<endl;
    cout<<"designation="<<desg<<endl;
    cout<<"sallary    ="<<sallary<<endl;
    
}
int main()
{
    employee e;
    e.gatedata();
    e.showdata();
    return 0;
}