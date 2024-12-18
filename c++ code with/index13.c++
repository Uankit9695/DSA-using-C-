#include<iostream>
using namespace std;
class person
{
    protected:
    char name[20];
    int age;
    public:
    void gatedata()
    {
        cout<<"enter the name of the person::"<<endl;
        cin>>name;
        cout<<"enter the age of the person::"<<endl;
        cin>>age;
    }
    void showdata()
    {
        cout<<"name of the person="<<name<<endl;
        cout<<"age of the person="<<age<<endl;
    }
};
class student:public person
{
    protected:
    string grade;
    public:
    void gatedata1()
    {
        cout<<"enter the name of the student::"<<endl;
        cin>>name;
        cout<<"enter the age of the student::"<<endl;
        cin>>age;
        cout<<"enter the grade of the student::"<<endl;
        cin>>grade;
    }
    void showdata1()
    {
        cout<<"name of the student="<<name<<endl;
        cout<<"age of the student="<<age<<endl;
        cout<<"grade of the student="<<grade<<endl;
    }
};
int main()
{
    person p1;
    p1.gatedata();
    p1.showdata();
    student s1;
    s1.gatedata1();
    s1.showdata1();
}