#include<iostream>
using namespace std;
class rectangle
{
    private:
    int lenght;
    int width;
    public:
    rectangle()
    {
        lenght=width=0;
        cout<<"area= "<<lenght*width<<endl;

    }
    ~rectangle()
    {
        cout<<"no space";
    }
    int aeraofrect()
    {
        return(lenght*width);
    }
    int lenght1()
    {
        return lenght;
    }
    int width1()
    {
        return width;
    }

};
rectangle::rectangle()
{
    lenght=x;
    width=y;
}
int main()
{
    rectangle a;
    cout<<"the lenght of the rectangle:"<<a.lenght1()<<endl;
    cout<<"the width of the rectange:"<<a.width1()<<endl;
    cout<<"aera of the rectange:"<<a.aeraofrect()<<endl;
    return 0;
}