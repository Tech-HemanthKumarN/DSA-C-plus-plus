//INTRODUCTION TO VECTOR..............................................................................

//NOTE-->VECTOR IS A DYNAMIC NOT CONSTANT
//_______________________________________________________________________________________________________
//STATIC ARRAY MEMORY ALLOCATION

// #include<iostream>
// using namespace std;
// void fun(int a[], int n)
// {
//     for(int i=0; i<n; ++i)
//     {
//         cout<<a[i]<<endl;
//     }
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     fun(arr,5);
//     return 0;
// }
//___________________________________________________________________________________________
//DINAMIC ARRAY MEMORY  ALLOCATION

// #include<iostream>
// using namespace std;
// void fun(int arr[],int n)
// {
//     cout<<"Array elements are:"<<endl;
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int *arr = new int[n]; //Each element would be 0 or garbage
//     //Taking n elements inputs and inserting in array
//     for(int i=0; i<n; ++i)
//     {
//     int data;
//     cin>>data;
//     arr[i]=data;
//     }
//     fun(arr,n);
//     return 0;
// }
//__________________________________________________________________________________________________________
//NOW PUSH,POP,CLEAR PORGRAM

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v)
// {
//     cout<<"Print vector:"<<endl;
//     int size=v.size();
//     for(int i=0; i<size; i++)
//     {
//         cout<<v[i]<<endl;
//     }
// }
// int main()
// {
//     vector<int>v;
// //pushing some element
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     print(v);
// //poping some element
//     v.pop_back();
//     print(v);
// //Pushing some elements
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     print(v);

// // v.clear();
// // print(v);

// //verifing it is cleared or not

//    v.clear();
//    v.push_back(50);
//    print(v); 
   
//    return 0;
// }
//______________________________________________________________________________________________
//NOW HERE WE ARE CHECKING CAPACITY AND SIZE
//NOTE--> WHEN ALLOCATION IS  FULL THEN CAPACITY IS INCRESES LIKE 2,4,8,16,32
//ONCE REFER IN NOTES
//HERE SIZE IS IMPORTANT RATHER THEN CAPACITY
//NOTE-->VECTOR IS A DYNAMIC NOT CONSTANT

// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>v)
// {
//     cout<<"Print vector:"<<endl;
//     int size = v.size();
//     for(int i=0; i<size; i++)
//     {
//         cout<<v[i]<<endl;
//     }
// }
// int main()
// {
//     vector<int>arr;

//     while(1)// while(1)-->it means infinet loop
//     {
//         int data;
//         cin>>data;

//         arr.push_back(data);
//         cout<<"Capacity:"<<arr.capacity()<<","<<"size:"<<arr.size()<<endl;
//     } 
//     return 0;
// }
//________________________________________________________________________________________________
//TAKING INPUT

// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>v)
// {
//     cout<<"print vector:"<<endl;
//     int size=v.size();
//     for(int i=0; i<size; i++)
//     {
//         cout<<v[i]<<endl;
//     }
// }
// int main()
// {
//     vector<int>v;
//     int n;
//     cout<<"Enter the size  of vector:"<<endl;
//     cin>>n;

//     for(int i=0; i<n; i++)
//     {
//         //taking user input
//         int data;
//         cout<<"Enter the elements:"<<endl;
//         cin>>data;

//         //pushing some element
//         v.push_back(data);
//     }
//     print(v);

//     //inserting external 10..-->means inserting extra size and elements
//     for(int i=0; i<10; i++)
//     {
//         v.push_back(10);
//     }
//     print(v);

//     return 0;
// }
//_____________________________________________________________________________________________
//VECTOR INTIALIZATION
//THER ARE TWO TYPES

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v)
// {
//     cout<<"Print vector:"<<endl;
//     int size = v.size();
//     for(int i=0; i<size; i++)
//     {
//         cout<<v[i]<<endl;
//     }
// }
// int main()
// {
//     vector<int>arr; //default with no data and 0 size
//     vector<int>arr1(5,-1); //here 5 is size of an vector and -1 is the value which is going insert inside the vector
//     // print(arr1);

//     //TYPE TWO
//     //Another way of intilization
//     vector<int> arr2={10,20,30,40,50};
//     arr2.pop_back();
//     // print(arr2);

//     //Anothre this also correct one in c++ 11
//     vector<int>arr3{1,2,3,4,5};
//     // print(arr3);

//     //HOW TO COPY THE VECTOR
//     vector<int>arr4={1,2,3,4,5};
//     vector<int>arr5(arr4);
//     print(arr5); //here arr4 arr5 ke sath copy hogaya
    
//     return 0;
// }
//________________________________________________________________________________________________
//YOU CAN ALSO TAKE DIFF DATA TYPES

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>v)
// {
//     cout<<"Print vector:"<<endl;
//     int size = v.size();
//     for(int i=0; i<size; i++)
//     {
//         cout<<v[i]<<endl;
//     }
// }
// int main()
// {
//     vector<char>v;
//     v.push_back('a');
//     v.push_back('b');
//     v.push_back('c');
//     v.push_back('d');
//     v.push_back('e');
// //here  i dont want middle element then use this method
//     // cout<<"Fornt element:"<<v[0]<<endl;
//     // cout<<"End element:"<<v[v.size()-1]<<endl;
// //Another method is
//     cout<<"Fornt element:"<<v.front()<<endl;
//     cout<<"End element:"<<v.back()<<endl;
//     return 0;
// }
//_____________________________________________________________________________________________________
//ANOTHER WAY OF PRINTING ,
//PRINTING METHOD TWO............

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v)
{
    cout<<"Printing vector method 2:"<<endl;
    for(auto it:v) //Here  it:v-->it means i am telling that transfer all the element of v to it and then print  karo
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    return 0;
}