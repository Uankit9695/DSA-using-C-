#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    float cgpa;
    public:
    void gatedata()
    {
        cout<<"enter the name:";
        cin>>name;
        cout<<"roll number:";
        cin>>roll;
        cout<<"enter the cgpa";
        cin>>cgpa;
    }
    void showdata()
    {
        cout<<"name="<<name<<endl;
        cout<<"roll number="<<roll<<endl;
        cout<<"cgpa="<<cgpa<<endl;
    }
};
int main()
{
    student s1;
    s1.gatedata();
    s1.showdata();
}