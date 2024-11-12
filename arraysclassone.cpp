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
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
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
//_______________________________________________________________________________________________________
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
//LINER SEARCH
  
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
//         cin>>size;
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

#include<iostream>
using namespace std;
void extremePrint(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
       if(i==j)
       {
        cout<<arr[i]<<" ";
        // i++;
        break;
       }
       else
       {
         cout<<arr[i]<<" ";
        i++;
        cout<<arr[j]<<" ";
        j--;
       }
    }
}
int main()
{
    int arr[]={ 10,20,30,40,50,60,70};
    int size=7;
    extremePrint(arr,size);
    return 0;
}
//________________________________________________________________________________________________________
//HOME WORK SWAPING AN ARRAY IN DIFFERENT WAY, AND REVERSE AN ARRAY
