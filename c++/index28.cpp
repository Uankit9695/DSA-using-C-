#include<iostream>
using namespace std;
class collage
{
    protected:
    string name;
    int ID;
    
    public:
    void gatedata();
    void showdata();
};
class employee: public collage
{
    private:
    float sallary;
    public:
    void gatedata()
    {
        cout<<"enter the name of the employee::";
        cin>>name;
        cout<<"enter the id of the employee::";
        cin>>ID;
        cout<<"enter the sallary of the emplyee::";
        cin>>sallary;
    }
    

}