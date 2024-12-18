#include<iostream>
#include<string.h>
using namespace std; 
class employee
{
    private:
    int num;
    //string name;
    
    float salary;
    public:
    void setdata(int a, float c);
    void getdata()
    {
        cout<<"id is="<<num<<endl;
        //cout<<"name is="<<name<<endl;
        cout<<"sallary is="<<salary<<endl;
    }
};
void employee::setdata(int a, float c)
{
    num=a;
    //name=b;
    salary=c;
    
    
}
int main()
{
    employee ankit;
    ankit.setdata(456,8760.78);
    ankit.getdata();
    return 0;
}
