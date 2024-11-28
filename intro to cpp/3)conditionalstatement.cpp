// EVEN OR ODD
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     cout<<"your answer is:"<<endl;
//     if(num%2==0)
//     {
//         cout<<"Its even"<<endl;
//     }
//     else
//     {
//         cout<<"Its odd"<<endl;
//     }
//     return 0;
// }
//______________________________________________________________________________________________________

// IF ELSE IF
// #include<iostream>
// using namespace std;
// int main()
// {
//     int money;
//     cout<<"enter your budget"<<endl;
//     cin>>money;
//     if( money>50)
//     {
//         cout<<"Goa trip"<<endl;
//     }
//     else if(money>=30)
//     {
//         cout<<"karnataka trip"<<endl;
//     }
//     else if(money<20)
//     {
//         cout<<"trip cancell, TATA BYE BYE KATHAM"<<endl;
//     }
//     return 0;
//___________________________________________________________________________________________________

// NESTED IF
// #include<iostream>
// using namespace std;
// int main()
// {
//     int salary;
//     cout<<"enter your salary:"<<endl;
//     cin>>salary;
//     cout<<"congragulation!!!!!"<<endl;
//     if(salary>=30000)
//     {
//         if(salary>=100000)
//         {
//             cout<<"Data with love"<<endl;
//         }
//         else
//         {
//             cout<<"Trip with soul"<<endl;
//         }
//     }
//     else
//     {
//         cout<<"stay with ego"<<endl;
//     }
//     if(salary<10)
//     {
//         cout<<"don't think anymore"<<endl;
//     }
//     return 0;
// }
//_____________________________________________________________________________________________________

// USING TERNARY OPERATOR...(Condition)?=:=; here first = -->means true and second one means false
// #include<iostream>
// using namespace std;
// int main()
// {
//     int money;
//     cout<<"Enter your money:"<<endl;
//     cin>>money;
//     cout<< ( ( money>50000) ? "Ram Ram":"Govinda Govinda");
//     return 0;
// }
//__________________________________________________________________________________________________

//SWITCH CASE
// #include<iostream>
// using namespace std;
// int main()
// {
//     char grade;
//     cout<<"Enter your grade:"<<endl;
//     cin>>grade;
//     switch(grade)
//     {
//         case 'A':cout<<"You got > 90%"<<endl;
//         break;
//         case 'B':cout<<"You got > 75%"<<endl;
//         break;
//         case 'C':cout<<"You got > 35%"<<endl;
//         break;
//         default:
//         cout<<"Bahai thu to fail ho gaya"<<endl;
       
//     }
//     return 0;
// }
//______________________________________________________________________________________________________

//FOR LOOP
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num=22;
//     for(int i=0; i<=10; i++)
//     {
//         cout<<i*num<<endl;
//     }
//     return 0;
// }
//_______________________________________________________________________________________

//BREAK KEYWORD
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         if(i==3)
//         {
//             break;
//         }
//         else
//         {
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }
//_______________________________________________________________________________________________

//CONTINUE KEYWORD
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         if(i==3)
//         {
//             continue;;
//         }
//         else
//         {
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }
//___________________________________________________________________________________________________

//WHILE LOOP
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     while(i<=5)
//     {
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }
//___________________________________________________________________________________________________

//DOWHILE LOOP
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do
//     {
//         cout<<i<<endl;
//         i++;
//     } while (i<=6);
//     return 0;
// }
//___________________________________________________________________________________________________

//HOME WORK, PRINTING ALPHBETES
// #include<iostream>
// using namespace std;
// int main()
// {
//    for(char ch='A';ch<='Z'; ch++)
//    {
//      cout<<ch<<" ";
//    }
//    for(char ch='a';ch<='z'; ch++ )
//    {
//      cout<<ch<<" ";
//    }
//     return 0;
// }
//___________________________________________________________________________________________________

//NESTED LOOP
// #include<iostream>
// using namespace std;
// int main()
// {
//    for(int i=0; i<3; i++)
//    {
//     for(int j=0; j<6; j++)
//     cout<<"i:"<<i<<" "<<"j:"<<j<<endl;
//    }
//     return 0;
// }
//________________________________________________________________________________________________________

//
#include<iostream>
using namespace std;
void printNtable(int n)
{
    for(int i=0; i<=10; i++)
    {
        cout<<n*i<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter N:"<<endl;
    cin>>n;
    printNtable(n);
    return 0;
}