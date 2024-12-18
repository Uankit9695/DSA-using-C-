// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main()
// // // // // {
// // // // //     int ex[3]={-1,2};
// // // // //     for(int i=0;i<2;i++)
// // // // //     {
// // // // //         try
// // // // //         {
// // // // //             int x=ex[i];

// // // // //             if(x>0)
// // // // //             {
// // // // //                 throw x;

// // // // //             }
// // // // //             else
// // // // //             {
// // // // //                 throw 'x';
// // // // //             }
// // // // //         }
// // // // //         catch(...)
// // // // //         {
// // // // //             cout<<"spacel exception::"<<endl;
// // // // //         }
        
// // // // //     }
// // // // // }

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     try
// // // //     {
// // // //         try
// // // //         {
// // // //             throw 20;
// // // //         }
// // // //         catch(int x)
// // // //         {
// // // //             cout<<"handale partilly\n";
// // // //             throw;
// // // //         }
// // // //     }
// // // //     catch(int y)
// // // //     {
// // // //         cout<<"handle remaing\n";
// // // //     }
// // // // }

// // // #include<iostream>
// // // using namespace std;

// // // int divition(int num1, int num2)
// // // {
// // //     if(num2==0)
    
// // //         throw num1;
    
// // //     return num1/num2;
    

// // // }
// // // int main()
// // // {
// // //     int num1, num2;
// // //     cout<<"enter the two number::"<<endl;
// // //     cin>>num1>>num2;
// // //     try
// // //     {
// // //         int result=divition(num1,num2);
// // //         cout<<num1<<"/"<<num2<<"="<<result;
// // //     }
// // //     catch(int e)
// // //     {
// // //         cout<<"exception of the function "<<  e  <<" is not divisible by zero"<<endl;
// // //     }
// // //     return 0;

// // // }
// // #include<iostream>
// // using namespace std;
// // void func1()
// // {
// //     try
// //     {
// //         cout<<"this function throw out exception\n";
// //         throw exception();
// //     }
// //     catch(exception&)
// //     {
// //         cout<<"exception is catch in first catch block"
// //         <<"\nfunction func1 re throw exception\n";
// //         throw;

// //     }
// //     cout<<"\nthis also shuld not print\n";

// // }
// // int main()
// // {
// //     try
// //     {
// //         cout<<"\n main invike func1\n";
// //         func1();
// //     }
// //     catch(exception e)
// //     {
// //         cout<<"excption handling in main";
// //     }
// // }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int size,i;
//     cout<<"enter the element";
//     cin>>size;
//     int *ptr=new int[size];
//     for(i=0;i<size;i++)
//     {
//         cin>>ptr[i];
//     }
//     for(i=0;i<size;i++)
//     {
//         cout<<ptr[i]<<",";
//     }
//     delete[] ptr;

// }
#include<iostream>
using namespace std;
class Box
{
    public:
    Box()
    {
        cout<<"constructer called"<<endl;
    }
    ~Box()
    {
        cout<<"distructer colled"<<endl;
    }
};
int main()
{
    Box *myBox=new Box[4];
    delete[] myBox;
}