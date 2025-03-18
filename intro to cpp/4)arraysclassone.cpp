//ARRAY INDEXING
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[ ]={10,20,30,40};
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
//     return 0;
// }
//__________________________________________________________________________________________________
//FILL METHOD

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[ ]={10,20,30,40,50};
//     fill(arr,arr+5, 6);
//     // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
//     for(int i=0; i<=5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//___________________________________________________________________________________________________
//TAKING INPUT FOR ARRAY
 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     for(int i=0; i<5;i++)
//     {
//         cout<<"Enter the value for box index:"<<i<<endl;
//         cin>>arr[i];
//     }
//     {
//         for(int i=0; i<5; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
//     return 0;
// }
// _______________________________________________________________________________________________________
//USING PASS BY REFRENCE

// #include<iostream>
// using namespace std;
//   void solve(int arr[], int size)
//   {
//     arr[1]=50;
//   }
// int main()
// {
//     int arr[ ]={10,20,30,40};
//     int size=4;
//     solve(arr,size);
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
//     return  0;
// }
// _____________________________________________________________________________________________________
//ARAY IS A PASS BY REFERENCE....-->imp

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

//     solve(arr,size);
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
//__________________OR_________________________________________________________________
// #include<iostream>
// using namespace std;
// void vector(int num[], int n )
// {
//     for(int i=0; i<n; i++)
//     {
//         num[i]=num[i]+10;
//     }
//     return;
// }
// int main()
// {
//     int arr[100];
//     int size;
//     cout<<"Enter the size:"<<endl;
//     cin>>size;
//     for(int i=0; i<size; i++)
//     {
//         cout<<"Entert the elements:"<<i<<endl;
//         cin>>arr[i];
//     }
//     vector(arr,size);
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//_______________________________________________________________________________________________________
//MULTIPLING ARRAY

// #include<iostream>
// using namespace std;
// void print(int arr[], int size)
// {
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// void solve(int arr[], int n)
// {
//     for(int i=0; i<n;i++)
//     {
//         arr[i]=arr[i]*10;
//     }
// }

// int main()
// {
//     int arr[ ]={10,20,30,40,50};
//     int size=5;
//     solve(arr,size);
//     print(arr,size);
//     return 0;
// }
//___________________________________________________________________________________________________________
//FINDING THE TARGET 
//LINER SEARCH...................
  
// #include<iostream>
// using namespace std;
// bool solve(int arr[], int size, int target)
// {
//     for(int i=0; i<size; i++)
//     {
//         if(arr[i]==target)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     // int arr[ ]={10,20,30,40,50,60,70,80,90};
//     // int size=9;
//     int arr[100];
//     int size;
//     cout<<"Enter the number of element"<<endl;
//     cin>>size;
//     for(int i=0; i<size; i++)
//     {
//         cout<<"Enter the element"<<i<<endl;
//         cin>>arr[i];
//     }

//     int target;
//     cout<<"Enter the target:"<<endl;
//     cin>>target;
//     bool ans=solve(arr,size,target);
//     cout<<ans<<endl;
//     return 0;
// }
//________________________________________________________________________________________________
//FINDING THE MAXIMUM ANSWER

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findmax(int arr[],int size)
// {
//     int maxans=INT8_MIN;
//     for(int i=0; i<size; i++)
//     {
//         maxans=max(maxans,arr[i]);
//     }
//     return maxans;  
// }
// int main()
// {
//     int arr[100];
//     int size;
//     cout<<"Enter the element"<<endl;
//     cin>>size;

//     for(int i=0; i<size; i++)
//     {
//         cout<<"Enter the input value for index:"<<i<<endl;
//         cin>>arr[i];
//     }
//     cout<<"The  Max number is:"<<findmax(arr,size)<<endl;
//     return 0;
// }
//______________________________________________________________________________________________________
//FINDING MINIMUM
 
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findmin(int arr[],int size)
// {
//     int minans=INT_MAX;
//     for(int i=0; i<size; i++)
//     {
//         minans=min(minans,arr[i]);
//     }
//     return minans;  
// }
// int main()
// {
//     int arr[100];
//     int size;
//     cout<<"Enter the element"<<endl;
//     cin>>size;

//     for(int i=0; i<size; i++)
//     {
//         cout<<"Enter the input value for index:"<<i<<endl;
//         cin>>arr[i];
//     }
//     cout<<"The  MIN number is:"<<findmin(arr,size)<<endl;
//     return 0;
// }
//___________________________________________________________________________________________________
//PRNTING ZEROS AND ONES COUNT

// #include<iostream>
// using namespace std;
// void PrintZerocountAndOnescount(int arr[], int n)
// {
//     int Zerocount=0;
//     int Onescount=0;
//     //Traversing
//     for(int i=0; i<n; i++)
//     {
//         int currentelement=arr[i];
//         if(currentelement==0)
//         {
//             Zerocount++;
//         }
//         if(currentelement  ==1)
//         {
//             Onescount++;
//         }
//     }
//     cout<<"Total zerocount:"<<Zerocount<<endl;
//     cout<<"Total onescount:"<<Onescount<<endl;
// }
// int main()
// {
//     int arr[100];
//     int size;
//     cout<<"Enter the element"<<endl;
//     cin>>size;

//     for(int i=0; i<size; i++)
//     {
//         cout<<"Enter the input value for index:"<<i<<endl;
//         cin>>arr[i];
//     }
//     PrintZerocountAndOnescount(arr,size);

//     return 0;
// }
//_____________________________________________________________________________________________________
//TWO POINTER TECHNIQUE VERY IMP
//FOR EVEN

// #include<iostream>
// using namespace std;
// void extremePrint(int arr[],int n)
// {
//     int i=0;
//     int j=n-1;
//     while(i<j)
//     {
//         cout<<arr[i]<<" ";
//         i++;
//         cout<<arr[j]<<" ";
//         j--;
//     }
// }
// int main()
// {
//     int arr[]={ 10,20,30,40,50,60,70,80};
//     int size=8;
//     extremePrint(arr,size);
//     return 0;
// }
//_____________________________________________________________________________________________________
//TWO POINTER TECHNIQUE VERY IMP
//FOR ODD

// #include<iostream>
// using namespace std;
// void extremePrint(int arr[],int n)
// {
//     int i=0;
//     int j=n-1;
//     while(i<=j)
//     {
//        if(i==j)
//        {
//         cout<<arr[i]<<" ";
//         // i++;
//         break;
//        }
//        else
//        {
//          cout<<arr[i]<<" ";
//         i++;
//         cout<<arr[j]<<" ";
//         j--;
//        }
//     }
// }
// int main()
// {
//     int arr[]={ 10,20,30,40,50,60,70};
//     int size=7;
//     extremePrint(arr,size);
//     return 0;
// }
//________________________________________________________________________________________________________
//Home work revers an array and swaping an array in diff way

//FILL METHOD
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[10];

//     fill(arr, arr+5, 5);
//     fill(arr+5, arr+10, 10);

//     for(int i=0; i<10; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//_________________________________________________________________________________________________________________
//THER ARE DIFF TYPES OF SWAPING


// #include<iostream>
// using namespace std;
// int main()
// {
//     //1)swap in built function
//     // int a=10;
//     // int b=5;
//     // swap(a,b);
//     // cout<<"a:"<<a<<" "<<"b:"<<b<<" ";

//     //2)temp variable
//     // int a=10;
//     // int b=5;
//     // int temp;
//     // temp=a;
//     // a=b;
//     // b=temp;
//     // cout<<"a:"<<a<<" "<<"b:"<<b<<" ";

//     //arthematic method imp for IQS..................................................................
//     // int a=10 , b=5 ;
//     // a=a+b;//a=15
//     // b=a-b;//b=10
//     // a=a-b;//a=5
//     // cout<<"a:"<<a<<" "<<"b:"<<b<<" ";

//     //USING XOR BITWISE OPERATOR VIMP FOR IQS......................................................
//     int a=10 , b=5;
//     a=a^b;
//     b=b^a;
//     a=a^b;
//     cout<<"a:"<<a<<" "<<"b:"<<b<<" ";
//     return 0;
// }
//__________________________________________________________________________________________________________
//REVERS AN ARRAY

// #include<iostream>
// #include<algorithm>
// using namespace std;
// void revers(int arr[], int n)
// {
//     int l=0; 
//     int h=n-1;

//     while(l < h)
//     {
//         swap(arr[l],arr[h]); //-->or--> swap(arr[l++],arr[h--]);
//         l++;
//         h--;
//     }
// }
// int main()
// {
//     int arr[5]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // revers(arr,n); //method 1 long method
//     // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
//     revers(arr,n);//method 2 short method
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }
// HOME WORK IS OVER
// ____________________________________________________
// #include<iostream>
// using namespace std;
// bool findtarget(int arr[],int size, int target)
// {
//     for(int i=0; i<size; i++)
//     {
//         if(arr[i]==target)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int arr[100];
//     int n;
//     cout<<"Enetr the number of size:"<<endl;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         cout<<"Enter the number of elements:"<<i<<endl;
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter your target:"<<endl;
//     cin>>target;
//     int result=findtarget(arr,n,target);
//     if(result==true)
//     {
//         cout<<"Target Found"<<endl;
//     }
//     else
//     {
//         cout<<"Targert not found"<<endl;
//     }
//     return 0;
// }
// ______________________________________________
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int findmin(int arr[],int size)
// {
//     int minans=INT_MAX;
//     for(int i=0; i<size; i++)
//     {
//         minans=min(minans,arr[i]);
//     }
//     return minans;
// }
//  int main()
//  {
//     int arr[100];
//     int n;
//     cout<<"Enter the size:"<<endl;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         cout<<"Enter the number of elements:"<<endl;
//         cin>>arr[i];
//     }
//     cout<<"Minans is:"<<findmin(arr,n)<<endl;
//     return 0;
//  }
// 
// #include<iostream>
// using namespace std;
// void fun(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter the size of array:"<<endl;
//     cin>>n;
//     // dynamicaly declared
//     int*arr=new int[n];
//     cout<<"Enter the array elements:"<<endl;
//    for(int i=0; i<n; i++)
//    {
//     int data;
//     cin>>data;
//     arr[i]=data;
//    }
//    cout<<"Array elements are:"<<endl;
//    fun(arr,n);
//     return 0;
// }
// __________________________________________________________
