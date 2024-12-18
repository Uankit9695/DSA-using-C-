#include<iostream>
using namespace std;
class student
{
    private:
    int id;
    string name;
    public:
    class date
    {
        private:
        int dd;
        string mm;
        int yy;
        public:
        void gatedateof();
        void showdata();
    };
    void nameandid();
    void showdata();
};
void student::nameandid()
{
    cout<<"enter the id:"<<endl;
    cin>>id;
    cout<<"enter the name:"<<endl;
    cin>>name;
}
void student::date::gatedateof()
{
    cout<<"date of birth :";
    cin>>dd>>mm>>yy;

}
void student::showdata()
{
     cout<<"name="<<name<<endl;
    cout<<"id="<<id<<endl;
}
void student::date::showdata()
{
    cout<<"date of birth="<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{
    student s1;
    student::date d1;
    s1.nameandid();
    d1.gatedateof();
    s1.showdata();
    d1.showdata();
    return 0;
}