//conversion from decimal to binary
// #include<iostream>
// #include<cmath>
// using namespace std;
// int dec_bin(int n)
// {
//     int i=0; 
//     int binaryno=0;
//     while(n>0)
//     {
//         int bit = n % 2;
//         binaryno+=bit*pow(10,i++);
//         n  = n / 2 ;
//     }
//     return binaryno;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the decimal number:"<<endl;
//     cin>>n;
//     cout<<"the binary rep is:"<<endl;
//     int binary=dec_bin(n);
//     cout<<binary;
//     return 0;
// }
//______________________________________________________________________________________________
//Decimla to binary cinversio// #include<iostream>
// #include<cmath>
// using namespace std;
// int bin_dec(int n)
// {
//     int i=0; 
//     int decimalno=0;
//     while(n)
//     {
//         int bit = n % 10;
//         decimalno+=bit*pow(2,i++);
//         n /= 10 ;
//     }
//     return decimalno;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the binary number:"<<endl;
//     cin>>n;
//     cout<<"the decimal rep is:"<<endl;
//     int decimal=bin_dec(n);
//     cout<<decimal;
//     return 0;
// }