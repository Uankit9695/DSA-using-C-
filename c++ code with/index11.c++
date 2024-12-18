#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0,n,i,temp ,add=0;
    cout<<"enter the array of the numnber";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        add=add+arr[i];

        
        
    }

    cout<<"subarray is:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr[i];
        temp=sum+i;

        
        cout<<"\n";
        
    }
    cout<<"lenth="<<temp<<endl;
    cout<<"sum="<<add;
    

    

    

}