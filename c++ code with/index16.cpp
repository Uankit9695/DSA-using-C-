#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    const int max=100;
    char buffer[max];
    ifstream read("ankit.txt");
    while(read)
    {
        read.getline(buffer,max);
        cout<<buffer<<endl;
    }
    return 0;
}