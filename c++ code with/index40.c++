// // // // creating a file.
// // // // // #include<iostream>
// // // // // #include<fstream>
// // // // // using namespace std;
// // // // // int main()
// // // // // {
// // // // //     ofstream myfile;
// // // // //     myfile.open("ank9695.txt");
// // // // //     if(!myfile)
// // // // //     {
// // // // //         cout<<"file not created";
// // // // //     }
// // // // //     else
// // // // //     {
// // // // //         cout<<"file is created";
// // // // //         myfile<<"i am ankit 9695";
// // // // //         myfile.close();
// // // // //     }

// // // // // }

// // // //open the file . 

// // // // #include<iostream>
// // // // #include<fstream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     ifstream myfile;
// // // //     myfile.open("ank9695.txt");
// // // //     string dataread;
// // // //     getline(myfile,dataread);
// // // //     cout<<"data is\n"<<dataread;
// // // //     myfile.close();
    

// // // // }

// // // // use of tellg() in file handling.
// // // #include<iostream>
// // // #include<fstream>
// // // using namespace std;
// // // int main()
// // // {
// // //     ifstream myfile;
// // //     myfile.open("ank9695.txt");
// // //     char ch;
// // //     int p;
// // //     while(myfile.eof()==0)
// // //     {
// // //         myfile>>ch;
// // //         p=myfile.tellg();
// // //         cout<<p<<ch<<endl;
// // //     }
// // //     myfile.close();
// // // }

// // // use of tellp() function in file handling.
// // #include<iostream>
// // #include<fstream>
// // using namespace std;
// // int main()
// // {
// //     ofstream myfile;
// //     myfile.open("yadav.txt");
// //     myfile<<"hello i am ankit kumar yadav";
// //     int p;
// //     p=myfile.tellp();//charectyer store in the file .
// //     cout<<p;
// //     myfile.close();
// // }

// use of seekg int input istream.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ifstream myfile;
//     myfile.open("ank9695.txt");
//     int op=4;
//     myfile.seekg(op);
//     while(myfile.eof()==0)
//     {
//         char ch;
//         myfile>>ch;
//         cout<<ch;
//     }
//     myfile.close();

// }

// use of seekp in file handling for entring the deta;
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("ank9695.txt");
    myfile<<"hello how are you am ankit kumar yadav";
    int op=6;
    myfile.seekp(op-1);
    myfile<<" aryan";
    myfile.close();
}