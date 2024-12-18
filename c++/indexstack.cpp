//In this program we use stack (push and pup).
#include<iostream>
using namespace std;
#define max 50
class stack
{
    private:
    int st[max];
    int top;
    public:
    stack()
    {
        top=10;
    }
    void push(int var)
    {
        top++;
        st[top]=var;
    }
    int pop()
    {
        return(st[top--]);
    }
};
int main()
{
    stack s1;
    s1.push(9);
    s1.push(10);
    s1.push(5);
    s1.push(1);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    s1.push(11);
    cout<<s1.pop()<<endl;
    s1.push(33);
    cout<<s1.pop()<<endl;
    s1.push(20);
    s1.push(23);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
   
}