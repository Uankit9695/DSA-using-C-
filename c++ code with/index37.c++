// in file we take input to the user foe entering the name ;
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    ofstream aout("ankitd.txt");
    cout<<"enter the name::";
    cin>>name;
    aout<<"my name is::"+name;
    aout.close();

    ifstream ain("ankitd.txt");
    string cantect;
    ain>>cantect;
    getline(ain,cantect);
    cout<<"the cantent of the file is::"<<cantect;
    ain.close();
}