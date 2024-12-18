#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st[3];
    ifstream in("ankit.txt");
    
    getline(in,st[0]);
    getline(in,st[1]);
    getline(in,st[2]);
    cout<<st[0]<<endl;
    cout<<st[1]<<endl;
    cout<<st[2]<<endl;
}