#include<iostream>
using namespace std;
class sum
{
    public:
    int x;
    int y;
    
    public:
    sum()
    {
        x=0;
        y=0;
    }
    void gatedata()
    {
        cout<<"enter the numbers x and y"<<endl;
        cin>>x;
        cin>>y;
    }
    void gatedata(int num1, int num2)
    {
        x=num1;
        y=num2;

    }
    void gatedata(int num1, int num2, int num3)
    {
        x=num2;
        y=num3;
    }
    void showdata()
    {
        cout<<"sum of the number"<<x+y<<endl;
    }
};
int main()
{
    sum s1,s2,s3;
    
    s1.gatedata();
    s1.showdata();
    s2.gatedata(3,4);
    s2.showdata();
    s3.gatedata(3,4,5);
    s3.showdata();

    
}