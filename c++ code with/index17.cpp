// pointer
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    cout<<"the value of a is::"<<*(ptr)<<endl;

    // new key word;
    int *p= new int(40); // Diynmecaly incrse the value of 'p' using key word "new";
    cout<<"the value at address p is ::"<<*(p)<<endl;

    //allocate the memory dynamicaly;
    //new is also called oprater and delete
    int *arr= new int[5];
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
    arr[3]=40;
    //delete[] arr;
    //arr[0]=78;
    cout<<"the value of arr[0]::"<<arr[0]<<endl;
    cout<<"the value of arr[1]::"<<arr[1]<<endl;
    cout<<"the value of arr[2];:"<<arr[2]<<endl;
    cout<<"the value of arr[3]::"<<arr[3]<<endl;

}