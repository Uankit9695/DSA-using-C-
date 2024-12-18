#include<iostream>
#include<cstring>
using namespace std;
class sps
{
    protected:
    string name;
    int id;
    public:
    sps(string s, int d)
    {
        name=s;
        id=d;
    }
    virtual void display(){}

};
class staff:public sps
{
    protected:
    string subject;
    float rating;
    public:
    staff(string s, int d, string sub,float r):sps(s,d)
    {
        subject=sub;
        rating=r;
    }
    void display()
    {
        cout<<"name of the techer::"<<name<<endl;
        cout<<"id of the teacher::"<<id<<endl;
        cout<<"subjact of the teacher::"<<subject<<endl;
        cout<<"rating of the teacher::"<<rating<<"out of 5"<<endl;

    }
};
class student:public sps
{
    protected:
    
    float par;
    public:
    student(string s, int d, float r):sps(s,d)
    {
        
        par=r;
    }
    void display()
    {
        cout<<"name of the techer::"<<name<<endl;
        cout<<"id of the teacher::"<<id<<endl;
        
        cout<<"rating of the teacher::"<<par<<"out of 100%"<<endl;

    }
};
int main()
{
    staff *ptr;
    student *ptr2;
    string n,m;
    string s;
    int id,si;
    float rat,pr;
    n="ankit";
    s="maths";
    id=11046;
    rat=4.99;
    m="mukesh";
    si=258;
    pr=70;
    staff sf(n,id,s,rat);
    //sf.display();

    student st(m,si,pr);
    //st.display();

    sps *k[2];
    k[0] = &sf;
    k[1] = &st;

    k[0]->display();
    k[1]->display();



}