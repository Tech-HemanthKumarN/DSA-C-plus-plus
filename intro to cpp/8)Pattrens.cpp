// //SQUAR PATTREN

// #include<iostream>
// using namespace std;
// int main()
// {
//     int side;
//     cout<<"enter the side:"<<endl;
//     cin>>side;

//     for(int row=0; row<side; row++)
// it will execute in row manner......................outer loop row
//     {
//         for(int col=0; col<side; col++)
//         {
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//_________________________________________________________________________________________________________________
//RECTANGLE PATTERN

#include<iostream>
using namespace std;
int main()
{
    int length;
    int width;
    cout<<"Enter the length:"<<endl;
    cin>>length;
    cout<<"Enter the width:"<<endl;
    cin>>width;

    for(int row=0; row<length; row++)
    {
        for(int col=0; col<width; col++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
//_____________________________________________________________________________________________________________
