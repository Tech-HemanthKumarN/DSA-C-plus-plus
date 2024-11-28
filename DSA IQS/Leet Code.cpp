//INTERVIEW QUESTION FINDING THE UNIQE NUMBER USING XOR

// #include<iostream>
// using namespace std;
// int main()
// {
//    int ans=(2^2^4^5^6^5^8^4^6);
//    cout<<ans;

//     return 0;
// }
//____________________________________________________________________________________________________________________

// FINDING THE UNIQUE NUMBER

// #include<iostream>
// using namespace std;
// int finduniquenum(int arr[], int n)
// {
//     int ans=0;
//     for(int i=0; i<n; i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main()
// {
//     int arr[]={1,2,3,4,2,1,3};
//     int size = 7;

//     int ans = finduniquenum(arr,size);
//     cout<<"Uniquenum is:"<<ans<<endl;
//     return 0;
// }
//______________________________________________________________________________________________________
//SORTING ZEROS AND  ONES
//HERE WE CAN ALSO DO THIS BY USING FILL METHOD
//IMP FOR INTERVIEW...ONCE REFER THIS CONCEPT IN YOUR NOTES ANOTHER DIFFRENT PROBLEM ALSO THERE SOLVE IT

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void sortzeroandonr(int arr[], int n)
// {
//     int zerocount=0;
//     int onecount=0;
// // COUNTING ZERO AND ONE SO zerocont=3 and onecount=4
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==0)
//         {
//             zerocount++;
//         }
//         if(arr[i]==1)
//         {
//             onecount++;
//         }
//     }
//     //insertion
//     // for(int i=0; i<zerocount; i++)
//     // {
//     //     arr[i]=0;
//     // }
//     // for(int i=zerocount; i<n; i++)
//     // {
//     //     arr[i]=1;
//     // }
    
//     //using fill method
//     fill(arr,arr+zerocount,0);
//     fill(arr+zerocount,arr+n,1);

// }
// int main()
// {
//     int arr[]={0,1,1,1,0,0,1};
//     int size=7;

//     // sortzeroandonr(arr,size);
    
//     //another method built in sort
//     sort(arr,arr+size);
//     //printing the array
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//___________________________________________________________________________________________________
