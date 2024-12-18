// realtional oprator.
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    float inch;
    public:
    void gatedistance()
    {
        cout<<"enter the distance:"<<endl;
        cin>>feet>>inch;
    }
    void showdata()
    {
        cout<<feet<<"feet"<<inch<<"inch"<<endl;
    }
    bool operator <(Distance d)
    {
        float bd1=feet+inch/12;
        float bd2=d.feet+d.inch/12;
        return (bd1<bd2)?1:0;

    }
};
int main()
{
    Distance d1 , d2;
    d1.gatedistance();
    d2.gatedistance();
    d1.showdata();
    d2.showdata();
    if(d1<d2)
    {
        cout<<"d1 is smaller";
        
    }
    else{
        cout<<"d2 is smaller";
        
    }




}