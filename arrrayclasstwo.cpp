//PRINTING ALL PAIRS

// #include<iostream>
// using namespace std;
// void printallpaires(int arr[],int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout<<arr[i]<<", "<<arr[j]<<endl;
//         }
//     }
// }
// int main()
// {
//     int arr[]={10,20,30,40};
//     int size=4;
//     printallpaires(arr,size);

//     return 0;
// }
//__________________________________________________________________________________________________
//PAIRING LOWER TRINGLE..

// #include<iostream>
// using namespace std;
// void printallpaires(int arr[],int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i; j<n; j++)
//         {
//             cout<<arr[i]<<", "<<arr[j]<<endl;
//         }
//     }
// }
// int main()
// {
//     int arr[]={10,20,30,40};
//     int size=4;
//     printallpaires(arr,size);

//     return 0;
// }
//___________________________________________________________________________________________________
//SORTING ZEROS AND ONES
//VERY IMPORTANT IQ QUESTION

// #include<iostream>
// using namespace std;
// void sortzerosandones(int arr[],int n)
// {
//    int  zerocount=0;
//    int onescount=0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==0)
//         {
//             zerocount++;
//         }
//         if(arr[i]==1)
//         {
//             onescount++;
//         }
//     }
//     for(int i=0; i<zerocount; i++)
//     {
//         arr[i]=0;
//     }
//     for(int i=zerocount; i<n; i++)
//     {
//         arr[i]=1;
//     }
// }

// int main()
// {
//     int arr[]={1,0,0,1,0,1,1,0,1};
//     int size=9;
//     sortzerosandones(arr,size);
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//_______________________________________________________________________________________________________
// CHECKING TWO SUM

// #include<iostream>
// using namespace std;
// bool checktwosum(int arr[], int n, int target)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(arr[i]+arr[j]==target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[5];
//     int size;
//     int target;

//     cout<<"Enter the size:"<<endl;
//     cin>>size;

//     for(int i=0; i<size; i++)
//     {
//         cout<<"Enter the array element:"<<endl;
//         cin>>arr[i];
//     }

//     cout<<"Enter the target:"<<endl;
//     cin>>target;

//     bool ans=checktwosum(arr,size,target);
//     if(ans==true)
//     {
//         cout<<"Pair found"<<endl;
//         cin>>target;
//     }
//     else
//     {
//         cout<<"Pair not found"<<endl;
//     }
//     return 0;
// }
//__________________________________________________________________________________________________
//ANOTHER WAY OF CHECKING TWO SUM

// #include<iostream>
// using namespace std;
// pair<int, int> checktwosum(int arr[], int n, int target)
// {
// asumming that -1,-1 means no answer found
//     pair<int, int > ans= make_pair(-1,-1);
//     //check all pairs
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         if(arr[i]+arr[j]==target)
//         {
//             ans.first=arr[i];
//             ans.second=arr[j];
//             return ans;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int arr[]={10,20,30,40};
//     int n=4;
//     pair<int, int > ans=checktwosum(arr, n, 60);
//     if(ans.first==-1 && ans.second==-1)
//     {
//         cout<<"Pair not found"<<endl;
//     }
//     else
//     {
//         cout<<"Pair found:"<<ans.first<<" , "<<ans.second<<endl;
//     }
//     return 0;
// }
//_____________________________________________________________________________________________________
//PRINTING ALL TWO SUM

// #include<iostream>
// using namespace std;
// void checktwosum(int arr[], int n, int target)
// {
//     //check all pairs
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         if(arr[i]+arr[j]==target)
//         {
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
//     return;
// }
// int main()
// {
//     int arr[]={10,20,30,40};
//     int n=4;
//     int target=60;
//     checktwosum(arr,n,target);
//     return 0;
// }
//______________________________________________________________________________________________________
//PRINTING ALL TRIPLETS

// #include<iostream>
// using namespace std;
// void printalltriplets(int arr[],int n)
// {
//     int count=0;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             for(int k=0; k<n; k++)
//             {
//                 cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//                 count++;
//             }
//         }
//     }
//     cout<<"Total triplets printed:"<<count<<endl;
// }
// int main()
// {
//     int arr[]={10,20,30,40};
//     int size=4;

//     printalltriplets(arr,size);
//     return 0;
// }
//___________________________________________________________________________________________________

 //PRINTING ALL THREE SUM

// #include<iostream>
// using namespace std;
// void checktwosum(int arr[], int n, int target)
// {
//     //check all pairs
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             for(int k=0; k<n; k++)
//             {
//                 if(arr[i]+arr[j]+arr[k]==target)
//                 {
//                     cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//                 }
//             }
//         }
//     }
//     return;
// }
// int main()
// {
//     int arr[]={10,20,30,40};
//     int n=4;
//     int target=90;
//     checktwosum(arr,n,target);
//     return 0;
// }
//_______________________________________________________________________________________________________
//SHIFTING AN ARRAY
//SIMPLE WAY ASSUME FINALSHIFT AND SHIFT AS n
//size-->size of an array
//n-->refers to the number of element by which we have to shift

 #include<iostream>
 using namespace std;
 void rotatearray(int arr[], int size, int shift )
 {
    int finalshift = shift%size;
    if(finalshift == 0){
        //no need to do anything
        return ;
    }
    //step1:copy last finalshift elelment into temp array
    int temp[10000];
    int index=0;
    for(int i=size-finalshift; i<size; i++)
    {
        temp[index]=arr[i];
        index++;
    }
    //step 2: shift array elements by finalshift places
    for(int i=size-1; i>=0;i--)
    {
        arr[i]=arr[i-finalshift];

    }
    //step 3:copy temp elelments into original array
    for(int i=0; i<finalshift; i++)
    {
        arr[i]=temp[i];
    }
 }

 int main()
 {
    int arr[]={10,20,30,40,50,60};
    int size=6;
    //cyclically rotate array bu 2 places
    int shift=2;
    cout<<"Before:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotatearray(arr,size,shift);

    cout<<"After:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
 }