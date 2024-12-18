#include<iostream>
using namespace std;
class employee
{
    private:
    static int count;// bt difult it always intitilixe with zero'0'
    int id;
    public:
    void setdata(void)
    {
        cout<<"enter the id:"<<endl;
        cin>>id;
        count++;
    }
    void gatedata(void)
    {
        cout<<"id of the employee is="<<id<<" and number of the employee is="<<count<<endl;
    }
};
int employee::count=100;
int main()
{
    employee ankit,b,c;
    ankit.setdata();
    ankit.gatedata();
    b.setdata();
    b.gatedata();

    c.setdata();
    c.gatedata();

    return 0;


    
}
