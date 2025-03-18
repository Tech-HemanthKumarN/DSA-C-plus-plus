// #include<iostream>
// using namespace std;

// void printmyname(int n)  //THIS IS FORMAL PARAMETER //THIS ARE CALLED FUCTION//funtion defination
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<"ARYA"<<endl;
//     }
//     // cout<<"ARYA"<<endl;
// }//-->function end here
// int main()//code always execute from here
// {
//     int n;
//     cout<<"Enter the value for n:"<<endl;
//     cin>>n;
//     //function use-->function call 
//     printmyname(n); // THIS IS ACTUALL PARAMETER //THIS ARE CALLING FUNCTION//function declartion

//     return 0;
// }
//_________________________________________________________________________________________________________________
//ADDING TWO NUMBER  

// #include<iostream>
// using namespace std;
// int solve(int a, int b)
// {
//     int sum=a+b;
//     return sum;
// }
// int main()
// {
//     int a=5;
//     int b=5;
//     int totalsum=solve(a,b);
//     cout<<totalsum;
//     return 0;
// }
//______________________________________________________________________________________________________________
//WORKING
// #include<iostream>
// using namespace std;
// void solve(int num[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         num[i]=num[i]+10;
//     }
//     return;
// }
// int main()
// {
//     int arr[4]={0};
//     int size=4;

//     solve(arr, size);
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0 ;
// }
//_____________________________________________________________________________________________________________
// CHECKING AGE FOR VOTE

// #include<iostream>
// using namespace std;
// bool checkage(int age)
// {
//     if(age>18)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int age;
//     if(checkage(age))
//     {
//         cout<<"Can vote"<<endl;
//     }
//     else
//     {
//         cout<<"You Can't"<<endl;
//     }
//     return 0;
// }
//__________________________________________________________________________________________________
//TWO KA TABLE

// #include<iostream>
// using namespace std;
// void printNtable(int n)
// {
//     for(int i=0; i<=10; i++)
//     {
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter N:"<<endl;
//     cin>>n;
//     printNtable(n);
//     return 0;
// }
//_________________________________________________________________________________________________
//ARITHAMATIC PROGRATION

// #include<iostream>
// using namespace std;
// float calculatethetotalsum(int a, int n, int l)
// {
//     float ans=((n)*(a+l))/2.0;
//     return ans;
// }

// int main()
// {
//     float ans=calculatethetotalsum(1,5,3);
//     cout<<ans<<endl;
//     return 0;
// }
//________________________________________________________________________________________________
//PRINTING PRIME OR NOT
//natural numbers that are divisible by only 1 and the number itself is called prime.

// #include<iostream>
// using namespace std;
// bool isprimeornot(int number)
// {
//     for(int i=2; i<=(number-1);i++)
//     {
//         if(number % i == 0)
// IF IT IS EQUAL TO EQUAL ZERO NOT A PRIME
//IF IT IS NOT EQUAL TO ZERO THEN IT IS A PRIME
//         {
//             return false;
//         }
//     }
// }
// int main()
// {
//     bool ans=isprimeornot(111);
//     if(ans==true)
//     {
//         cout<<"YES ITS A PRIME"<<endl;
//     }
//     else
//     {
//         cout<<"NOT A PRIME"<<endl;
//     }
//     return 0;
// }
//___________________________________________________________________________________________
//PRINTING THE EVEN NUMBERS INSIDE THE RANGE

// #include<iostream>
// using namespace std;

// void printeveninsidetherange(int start,int end)//function definaton
// {
//     for(int i=start;i<=end;i++)
//     {
//         int n = i;
//         if(!(n&1))//THIS IS FOR EVEN
//         // if((n&1))-->THIS IS FOR ODD NUMBERS
//         {
//             cout<<n<<endl;
//         }
//     }
// }

// int main()
// {
//     printeveninsidetherange(101,123);//function declartion
//     return 0;
// }

//__________________________________________________________________________________________________________
//CALCULATING PERCENTAGE

// #include<iostream>
// using namespace std;
// float calculatetotalpercentage(int sb1,int sb2, int sb3,int sb4,int sb5)
// {
//     float totalsub=sb1+sb2+sb3+sb4+sb5;
//     float totalmarks=500.0;
//     float percentage=(totalsub*100)/totalmarks;
//     return percentage;
// }
// int main()
// {
//     float result=calculatetotalpercentage(95,95,98,100,95);
//     cout<<result<<endl;
//     return 0;
// }
//_________________________________________________________________________________________________________
