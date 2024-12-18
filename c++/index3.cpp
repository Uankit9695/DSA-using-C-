
#include <iostream>

using namespace std;

int main()
{
    int n,r,sum=0,temp;
    cout<<"enter the number:";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"it is armstrong number";
    }
    else
    {
        cout<<"it is not a armstrong number";
    }
}
