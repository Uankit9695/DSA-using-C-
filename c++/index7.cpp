#include<iostream>
using namespace std;
class shop
{
    private:
    int itemprice[10];
    int itemid[10];
    int counter;
    public:
    void initcounter(void)
    {
        counter=0;
    }
    void setdata(void);
    void displaydata(void);
};
void shop::setdata(void)
{
    cout<<"Emter the id of the item:"<<endl;
    cin>>itemprice[ counter];
   
    cout<<"enter the id of the item:"<<endl;
    cin>>itemid[ counter];
    
}
void shop::displaydata(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"the ID of the itemis:"<<itemid[i]<<"and price"<<itemprice[i]<<endl;
    }
}
int main()
{
    shop dukan;
    dukan.setdata();
    dukan.setdata();
    dukan.setdata();
    dukan.displaydata();
}