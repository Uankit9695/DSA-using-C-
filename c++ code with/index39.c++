// using of open() and eof() for writing and reading in the function;
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("ankit.txt");
    out<<"this me \n";
    out<<"i am ankit kumar yadav\n";
    out<<"how are you all frainds\n";
    out.close();

    ifstream in;
    in.open("ankit.txt");
    string st;
    //in>>st;
    //cout<<st;
    while(in.eof()==0)  
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
}