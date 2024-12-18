//multi level inheritence:-
#include<iostream>
using namespace std;
class student
{
    protected:
    int id;
    string name;
    public:
    void gatedata()
    {
        cout<<"enter the id of the student"<<endl;
        cin>>id;
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        
    }
    void showdata()
    {
        cout<<"Student id="<<id<<endl;
        cout<<"name="<<name<<endl;
        
        
    }

};
class teacher:public student
{
    protected:
    string  subject;
    public:
    void gatdata()
    {
        cout<<"enter the techer id :"<<endl;
        cin>>id;
        cout<<"entre the name of the teacher:";
        cin>>name;
        cout<<"enter the subject of the teacher he teach:"<<endl;
        cin>>subject;
    }
    void showdata()
    {
        cout<<"teacher id="<<id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"subject thought"<<subject<<endl;
        
    }
};
class HOD:public teacher
{
    protected:
    int AU;
    public:
    void gatedata()
    {
        cout<<"enter the id of the HOD:"<<endl;
        cin>>id;
        cout<<"enter the name of the HOD:"<<endl;
        cin>>name;
        cout<<"enter the accadmic unit :"<<endl;
        cin>>AU;
        
    }
    void showdata()
    {
        cout<<"HOD id="<<id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"AUI is="<<AU<<endl;
        
    }
};
int main()
{
    HOD h1;
    h1.gatedata();
    h1.showdata();
    teacher t1;
    t1.gatdata();
    t1.showdata();
    student s1;
    s1.gatedata();
    s1.showdata();
    
}