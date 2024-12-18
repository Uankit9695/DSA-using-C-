#include <iostream>
#include <string.h>
using namespace std;
class binary
{
private:
    string s;

public:
    void read(void);
    void chkbin(void);
    void ones(void);
    void dispaly(void);
};
void binary::read(void)
{
    cout << "enter the binary number:" << endl;
    cin >> s;
    
}
void binary::chkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary number:";
            break;
        }
        else
        {
            cout << "\nit is a bainry number" << endl;
            break;
        }
    }
}
void binary::ones(void)
{
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::dispaly(void)
{
    chkbin();//it nesting of member function directly check with the help of nesting.
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
}

int main()
{
    binary b;
    b.read();
   // b.chkbin();
    cout << "binary number is:" << endl;
    b.dispaly();
    cout << "\ncomplement of the binary number is:" << endl;
    b.ones();
    b.dispaly();
}