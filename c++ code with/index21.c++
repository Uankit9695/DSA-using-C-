#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    float rollno;
    public:
    void nameroll(int a ,string s)
    {
        
        rollno=a;
        name=s;
    }
    void printnameroll()
    {
         cout<<"name is:"<<name<<endl;
        
        cout<<"roll no:"<<rollno<<endl;
    }

};
class marks:virtual public student
{
    protected:
    float maths , phy;
    public:
    void submarks(float a, float b)
    {
        maths=a;
        phy=b;

    }
    void printsubmarks()
    {
        cout<<"marks of the subject"<<endl
            <<"maths="<<maths<<endl
            <<"physics="<<phy<<endl;
    }
};
class sport: virtual public student
{
    protected:
    int score;
    public:
    void ptscore(int sr)
    {
        score=sr;
    }
    void printscore()
    {
        cout<<"score of PT is:"<<score<<endl;
    }
};
class result:public marks , public sport
{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+phy+score;
        printnameroll();
        printsubmarks();
        printscore();
        cout<<"total marks:"<<total<<endl;

    }
};
int main()
{
    result r1;
    r1.nameroll(78 ,"ankit");
    r1.submarks(78.6,87.0);
    r1.ptscore(90);
    r1.display();
}
