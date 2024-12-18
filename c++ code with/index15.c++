// #include<iostream>
// #define max_size 50
// using namespace std;
// class guest
// {
//     public:
//     int seatno;
//     char name[100];
// };
// class hall
// {
//     public:
//     static guest allguest[max_size];
//     static int rear , front;

//     static void allotseat()
//     {
//         if(rear==(max_size-1))
//         {
//             cout<<"hall is full"<<endl;
//         }
//         rear++;
//         cout<<"enter the guest name"<<endl;
//         cin>>allguest[rear].name;
//         allguest[rear].seatno=rear+1;

//     }
//     static void listguest()
//     {
//         if(front=-1)
//         {
//             ++front;
//         }
//         while(front<=rear)
//         {
//             cout<<"guest "<<allguest[front].name<<"  seted on sit no."<<allguest[front].seatno<<endl;
//             front++;

//         }
//     }
// };
// int hall::front=-1;
// int hall::rear=-1;
// guest hall::allguest[max_size];
// int main()
// {
//     hall::allotseat();
//     hall::allotseat();
//     hall::listguest();
//     hall::allotseat();
//     hall::allotseat();
//     hall::allotseat();
//     hall::listguest();
    
// }
#include<iostream>
#define max_size 50
using namespace std;
class guest
{
    public:
    int seatno;
    char name[100];
};
class hall
{
    public:
    static guest allguest[max_size];
    static int rear, front;
    static void seatallot()
    {
        if(rear==(max_size-1))
        {
            cout<<"hall is full"<<endl;
        }
        rear++;
        cout<<"enter the guest name::";
        cin>>allguest[rear].name;
        allguest[rear].seatno=rear+1;
    }
    static void listguest()
    {
        if(front=-1)
        {
            ++front;

        }
        while(front<=rear)
        {
            cout<<"guest:"<<allguest[front].name<<":"<<"seat no:"<<allguest[front].seatno<<endl;
            front++;
        }
    }
};
int hall::front=-1;
int hall::rear=-1;
guest hall::allguest[max_size];
int main()
{
    hall::seatallot();
    hall::seatallot();
    hall::listguest();
}