#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("ankit.txt");
    fout<<"hello world\n";
    fout<<"hello how are you\n";
    fout<<"what are you doing??\n";
    return 0;
}