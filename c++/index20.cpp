#include<iostream>
using namespace std;
class school
{
    protected:
    int roll;
    string name;
    int clas;
    public:
    void setdata(string s)
    {
        name=s;
    }
    void gatedata()
    {
        cout<<"the name of school::"<<endl;
        cout<<"#"<<name<<"#"<<endl;
    }
};
class class9:public school
{
    protected:
    int maths,phy,cham,bio,bee;
    public:
    void setdata1(string nm,int rol, int cl,int m,int p,int s,int t,int q)
    {
        name=nm;
        clas=cl;
        roll=rol;
        maths=m;
        phy=p;
        cham=s;
        bio=t;
        bee=q;

    }
    void gatedata1()
    {
        cout<<"name:"<<name<<endl;
        cout<<"class:"<<clas<<endl;
        cout<<"rollno:"<<roll<<endl;

        

        cout<<"maths::"<<maths<<endl;
        cout<<"physics::"<<phy<<endl;
        cout<<"chamistry::"<<cham<<endl;
        cout<<"biolpgy::"<<bio<<endl;
        cout<<"BEEE::"<<bee<<endl;
        
    }
};
int main()
{
    int size;
    cout<<"enter the number of student::";
    cin>>size;
    
    class9 *ptr9=new class9[size];
    class9 *ptrtamp=ptr9;
    string s;
    int r;
    int cl;
    int maths,phy,cham,bio,bee;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the name roll class::"<<i+1<<endl;
        cin>>s>>r>>cl;
        cout<<"enter the marks::"<<endl;
        cin>>maths>>phy>>cham>>bio>>bee;
        ptrtamp->setdata1(s,r,cl,maths,phy,cham,bio,bee);
        ptr9++;

    }
    for(int i=0;i<size;i++)
    {
        cout<<"\nstudent"<<i+1<<endl;
        ptrtamp->gatedata1();
    }

}