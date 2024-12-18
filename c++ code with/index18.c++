// swaping number 
#include<iostream>
using namespace std;
class swapping
{
    private:
    int x;
    int y;
    public:
    void gatedata()
    {
        x=10;
    }
    void gatedata(int num2)
    {
        y=num2;
    }
    
    void showdata()
    {
        cout<<"x="<<x<<endl;
        

    }
    void showdata1()
    {
        cout<<"y="<<y<<endl;
        

    }
    int swap(swapping a,swapping b);
    
};
int swapping::swap( swapping a, swapping b)
{
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;

}
int main()
{
    swapping s1,s2,s3;
    s1.gatedata();
    s2.gatedata(20);
    s1.showdata();
    s2.showdata1();
    s3.swap(s1,s2);
    s3.showdata();
    s3.showdata1();


}