#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c,a[10][10];
    cout<<"emter the row =";
    cin>>r;
    cout<<"enter the coloum=";
    cin>>c;
    cout<<"enter the matrix element:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"enetr the element"<<i+1<<j+1<<"is=";
            cin>>a[i][j];
        }
    }
    cout<<"matix is\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
            
            cout<<a[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    int base_addr=1000, size,rr,cc;
    cout<<"enter the size of each element:"<<endl;
    cin>>size;
    cout<<"enter the row number and coloum of element whose add you want to calculate:"<<endl;
    cin>>rr;
    cin>>cc;
    cout<<"address of the specified element="<<(base_addr+size*(rr*c+cc));
}