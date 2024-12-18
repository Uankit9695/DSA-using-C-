#include<iostream>
using namespace std;
int main()
{
    int a ,b ,res;
    cout<<"enter the number a nad b:"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw(b);
        }
        else
        {
            res=a/b;
            cout<<"rest="<<res<<endl;
        }
    }
    catch(int x)
    {
        cout<<"division by ="<<x<<" not possible"<<endl;
    }
    return 0 ;
}