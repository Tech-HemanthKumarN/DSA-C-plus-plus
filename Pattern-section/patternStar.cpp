//HALLOW SQUARE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int side;
//     cout<<"enter the side:"<<endl;
//     cin>>side;

//     for(int row=0; row<side; row++)
//     {
//         for(int col=0; col<side; col++)
//         {
//             if(row==0 || row==side-1)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 if(col==0 || col==side-1)
//                 {
//                     cout<<"* ";
//                 }
//                 else
//                 {
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//_____________________________________________________________________________________________________________
//HALLOW RECTANGLE
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
            if(row==0 || row==length-1)
            {
                cout<<"* ";
            }
            else
            {
                if(col==0 || col==width-1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}