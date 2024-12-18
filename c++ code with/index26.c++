// intisilization ofthe canstructer int diffrent types.
#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    //test(int i , int j):a(i),b(j)
    //test(int i , int j):a(i),b(i+j)
    //test(int i , int j):a(i),b(2*j)
    //test(int i , int j):a(i),b(i*j)
    //test(int i , int j):a(i),b(a+j)
    test(int i , int j):a(i),b(a*j)
    {
        cout<<"constructer excuted::"<<endl;
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;

    }
};
int main()
{
    test t1(4,6);
}