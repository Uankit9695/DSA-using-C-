#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    float cgpa;
    char name[100];
    public:
    void getdata();
    void showdata();

    
};   
void student::getdata()
{
    cout<<"enter the name of the student:\n";
    cin>>name;
    cout<<"enter the roll number of the student:\n";
    cin>>roll;
    cout<<"enter the cgpa:\n";
    cin>>cgpa;
}
void student::showdata()
{
    cout<<"name is="<<name<<endl;
    cout<<"roll is="<<roll<<endl;
    cout<<"cgpa is="<<cgpa<<endl;

}
int main()
{
    student s[10];
    int i,n;
    cout<<"How much student in the class:\n";
    cin>>n;
    for(i=1;i<n;i++)
    {
        s[i].getdata();
    }
    for(i=1;i<n;i++)
    {
        s[i].showdata();
    }
    return 0;
}

