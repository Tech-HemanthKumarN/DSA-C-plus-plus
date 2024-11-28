//DECLARATION AND INTIALIZATION OF 2D ARRAY

// #include<iostream>
// using namespace std;
// int main()
// {
//     //2D array declartion
//     // int arr[3][2];

//     //2D array intializtion
    
//     int arr1[3][2]=
//     {
//         {10,20},
//         {30,40},
//         {50,60}
//     };

//     //  OR  You can also use this in this way
//     // int arr1[3][2]={10,20,30,40,50,60};
//     cout<<arr1[0][0]<<","<<arr1[0][1]<<","<<arr1[1][0]<<","<<arr1[1][1]<<","<<arr1[2][0]<<","<<arr1[2][1]<<endl;
// return 0;
// }
//________________________________________________________________________________________________
//TRAVERS THE ENTIER ARRAY
//ROW WISE

// #include<iostream>
// using namespace std;
// int main()
// {

//     // int arr[3][2]=
//     // {
//     //     {10,20},
//     //     {30,40},
//     //     {50,60}
//     // };
//     int arr[3][2]={10,20,30,40,50,60};

//     int rowsize=3;
//     int colsize=2;
//     for(int rowindex=0; rowindex<rowsize; rowindex++)
//     {
//         for(int colindex=0; colindex<colsize; colindex++)
//         {
//             cout<<arr[rowindex][colindex]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//______________________________________________________________________________________________________________
//CHECKING 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][2]={10,20};//remang element will become zero
//     int rowsize=3;
//     int colsize=2;
//     for(int rowindex=0; rowindex<rowsize; rowindex++)
//     {
//         for(int colindex=0; colindex<colsize; colindex++)
//         {
//             cout<<arr[rowindex][colindex]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//_____________________________________________________________________________________________________________

// COLUMN WISE

// #include<iostream>
// using namespace std;

// int main()
// {
//     int array[3][2]=
//     {
//         {10,20},
//         {30,40},
//         {50,60}

//     };
// int rowSize=3;
// int colSize=2;

//  for(int colindex=0; colindex<colSize; colindex++)
// {
//     for(int rowindex=0; rowindex<rowSize; rowindex++)
//     {
//         cout<<"Printing "<<colindex<<","<<rowindex<<endl;
//         cout<<array[rowindex][colindex]<<endl;
//     }
// }

//     return 0;
// }
//______________________________________________________________________________________________________

//FILL METHOD USING 2D ARRAY

// #include<iostream>
// using namespace std;
// int main()
// {
    //FILL METHOD
//  int a[3][2]=
//     {
//         {10,20},
//         {30,40},
//         {50,60}

//     };

//     fill(a[0],a[2]+3*2,22,0);
//     cout<<a[0][0]<<","<<a[0][1]<<endl;
//     return 0;
// }
//______________________________________________________________________________________________________
//PRINTING  ENTIER  ARRAY -->DIAGONAL MATRIX-->SQUARE MATRIX

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={
//         {10,20,/ 30},
//         {40,50,60},
//         {70,80,90}
//         };
//         int rowsize=3;
//         int colsize=3;

//         for(int r=0; r<rowsize; r++)
//         {
//             for(int c=0; c<colsize; c++)
//             {
//                 if(r==c)
//                 {
//                     cout<<arr[r][c]<<endl;
//                 }
//                 cout<<endl;
//             }
//         }
     
//     return 0;
// }
//_______________________________________________________________________________________________________________________
//OPPSITE DIAGONAL

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={{10,20,30},
//                    {40,50,60},
//                    {70,80,90}
//                    };
//     int n=3;

//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i][n-1-i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
//_________________________________________________________________________________________________________________
//TAKING INPUT ROWWISE AND PRINTING----->rowwise

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3];
//     int rowsize=2;
//     int colsize=3;
//    //Taking input 
//     for(int r=0; r<rowsize; r++)
//     {
//         for(int c=0; c<colsize; c++)
//         {
//             cout<<"Enter the value for ("<< r <<","<< c <<") :";
//             cin>>arr[r][c];
//         }
//     }

//     //Printing
//     cout<<"Printing 2D array column wise"<<endl;
//     for(int r=0; r<rowsize; r++)
//     {
//         for(int c=0; c<colsize; c++)
//         {
//             cout<<arr[r][c]<<" ";
//         }
//         cout<<endl;
//     } 
//     return 0;
// }
// ______________________________________________________________________________________________________________
//TAKING INPUT FROM COLUMNWISE----->COLUMN WISE

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3];
//     int rowsize=2;
//     int colsize=3;
//    //Taking input 
    
    
    
   
//     for(int r=0; r<rowsize; r++)
//     {
//          for(int c=0; c<colsize; c++)
//         {
//             cout<<"Enter the value for ("<< r<<","<< c <<") :";
//             cin>>arr[r][c];
//         }
//     }

//     //Printing
//     cout<<"Printing 2D array column wise"<<endl;
//     for(int c=0; c<3; c++)
//     {
//         for(int r=0; r<2; r++)
//         {
            
//             cout<<arr[r][c]<<endl;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//__________________________________________________________________________________________________________
//LINEAR SEARCH USING 2D ARRAY

// #include<iostream>
// using namespace std;
// bool findtargetin2Darray(int arr[][4],int rowsize,int colsize , int target)
// {
//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             if(arr[i][j]==target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     int arr[3][4]={
//                    {10,11,12,13},
//                    {20,21,22,23},
//                    {30,31,32,33}  
//                 };

//     int rowsize=3;
//     int colsize=4;
//     int target=32;

//     bool ans=findtargetin2Darray(arr,rowsize,colsize,target);
//     if(ans==true)
//     {
//         cout<<"Target found"<<","<<ans<<endl;
//     }
//     else
//     {
//         cout<<"target not found"<<endl;
//     }

            
//     return 0;
// }
//____________________________________________________________________________________________________________
//2D ARRAY USING VECTOR

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<vector<int>> arr(4, vector<int> (3,0));
//     int rowsize=arr.size();
//     int colsize= arr[0].size();

//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//______________________________________________________________________________________________________________
//LINEAR SEARCH USING VECTOR 2D ARRAY 

// #include<iostream>
// #include<vector>
// using namespace std;
// bool search2Darray(vector<vector<int>>arr,int target)
// {
//     int rowsize=arr.size();
//     int colsize=arr[0].size();

//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             if(arr[i][j]==target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;

// }
// int main()
// {
//     vector<vector<int>> arr(4,vector<int>(3,0));
//     int rowsize=arr.size();
//     int colsize=arr[0].size();

//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             cout<<"Enter the value for ("<< i <<","<< j <<") :";
//             cin>>arr[i][j];
//         }
//     }
//     int target=40;
//     bool ans = search2Darray(arr,target);
//     cout<<"ans is:"<<ans<<endl;

//     return 0;
// }
//_________________________________________________________________________________________________________________
//FINDING MINMUM VALUES
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int findMinimumin2Darray(int arr[][4],int rowsize, int colsize)
// {
//     int minvalue=INT16_MAX;
//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             minvalue=min(arr[i][j],minvalue);
//         }
//     }
// //   overall T.C--->O(rowsize*colsize)
// //           S.C---->O(1)
//     return minvalue;
// }
// int main()
// {
//     int arr[3][4]={
//                     {10,11,12,13},
//                     {20,21,22,23},
//                     {30,31,32,33}
//                     };
//     int rowsize=3;
//     int colsize=4;

//     int ans = findMinimumin2Darray(arr,rowsize,colsize);
//     cout<<"min ans is:"<<ans<<endl;                
//     return 0;
// }
//_____________________________________________________________________________________________________________________
//FINDING MAX

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int findMaximumin2Darray(int arr[][4],int rowsize, int colsize)
// {
//     int maxvalue=INT16_MIN;
//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             maxvalue=max(arr[i][j],maxvalue);
//         }
//     }
// //   overall T.C--->O(rowsize*colsize)
// //           S.C---->O(1)
//     return maxvalue;
// }
// int main()
// {
//     int arr[3][4]={
//                     {10,11,12,13},
//                     {20,21,22,23},
//                     {30,31,32,33}
//                     };
//     int rowsize=3;
//     int colsize=4;

//     int ans = findMaximumin2Darray(arr,rowsize,colsize);
//     cout<<"max ans is:"<<ans<<endl;                
//     return 0;
// }
//________________________________________________________________________________________________________
//PRINTING ROWWISE-->SUM
// #include<iostream>
// using namespace std;
// void printRowSum(int arr[][4],int rowsize, int colsize)
// {
//     for(int r=0; r<rowsize; r++)
//     {
//         int sum=0;
//         //hr row k liye starting me 0 hai
       
//         for(int c=0; c<colsize; c++)
//         {
//             sum=sum+arr[r][c];
//         }
//         //jab saare column k element add krliye hai
//         //toh fer print karo
//         cout<< sum <<endl;
//     }
// }
// int main()
// {
//     int arr[3][4]={
//                     {10,10,10,10},
//                     {20,20,20,20},
//                     {30,30,30,30}
//                     };

//        int rowsize=3;
//        int colsize=4;

//        printRowSum(arr,rowsize,colsize);
    
//     return 0;
// }
//___________________________________________________________________________________________________________________
//SUM COLUMN WISE-->printing

// #include<iostream>
// using namespace std;
// void printColSum(int arr[][4],int rowsize, int colsize)
// {
    
//     for(int c=0; c<colsize; c++)
//     {
//         int sum=0;
//         //hr row k liye starting me 0 hai
//        for(int r=0; r<rowsize; r++)
        
//         {
//             sum=sum+arr[r][c];
//         }
//         //jab saare column k element add krliye hai
//         //toh fer print karo
//         cout<< sum <<endl;
//     }
// }
// int main()
// {
//     int arr[3][4]={
//                     {10,10,10,10},
//                     {20,20,20,20},
//                     {30,30,30,30}
//                     };

//        int rowsize=3;
//        int colsize=4;

//        printColSum(arr,rowsize,colsize);
    
//     return 0;
// }
//__________________________________________________________________________________________________________________
//PRINTG DAIGONAL MATRIX..
// #include<iostream>
// using namespace std;
// void printDaigonalSum(int arr[][3],int rowsize, int colsize)
// {
//     //METHOD-->1
//     // for(int r=0; r<rowsize; r++)
//     // {
//     //     int sum=0;
        
//     //     {
//     //         if(r==c)
//     //         {
//     //             sum=sum+arr[c][c];
//     //         }
//     //         cout<<sum<<endl;
//     //     }
//     // }
//     //METHOD-->2
//      int sum=0;
//     for(int r=0; r<rowsize; r++)
//     {
       
//         sum=sum+arr[r][r];
//     }
//     cout<< sum <<endl;
// }
// int main()
// {

//         int arr[3][3]={
//                     {10,10,10},
//                     {20,20,20},
//                     {30,30,30}
//                     };

//        int rowsize=3;
//        int colsize=3;

//        printDaigonalSum(arr,rowsize,colsize);
//     return 0;
// }
//_____________________________________________________________________________________________________________
//PRINTING OPPOSITE DAIGONAL MATRIX

// #include<iostream>
// using namespace std;
// void printDaigonalSum(int arr[][3],int rowsize, int colsize)
// {
//     //METHOD-->2
//      int sum=0;
//     for(int r=0; r<rowsize; r++)
//     {
       
//         sum=sum+arr[r][rowsize-1-r];
//     }
//     cout<< sum <<endl;
// }
// int main()
// {

//         int arr[3][3]={
//                     {10,10,10},
//                     {20,20,20},
//                     {40,30,30}
//                     };

//        int rowsize=3;
//        int colsize=3;

//        printDaigonalSum(arr,rowsize,colsize);
//     return 0;
// }
//____________________________________________________________________________________________________________
//TRANPOSE OF MATRIEX

// #include<iostream>
// using namespace std;
// void Tranposeofmatrix(int arr[][3],int rowsize,int colsize)
// {
//     int ans[100][100]={0};
//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             ans[i][j]=arr[j][i];
//         }
//     }

//      for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    
// }
// int main()
// {
//     int arr[3][3]=
//     {
//     {10,11,12},
//     {20,21,22},
//     {30,31,32}
//     };
//     int rowsize=3;
//     int colsize=3;

//     Tranposeofmatrix(arr,rowsize,colsize);

//     return 0;
// }
//__________________________________________________________________________________________________________________
//ANOTHER WAY OF SWAP

// #include<iostream>
// using namespace std;
// void Tranposeofmatrix(int arr[][3],int rowsize,int colsize)
// {
//     for(int i=0; i<rowsize; i++)
//     {
//         for(int j=i; j<colsize; j++)
//         {
//             swap(arr[i][j],arr[j][i]);
//         }
//     }

//     cout<<"Printing the transpose"<<endl;
//      for(int i=0; i<rowsize; i++)
//     {
//         for(int j=0; j<colsize; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    
// }
// int main()
// {
//     int arr[3][3]=
//     {
//     {10,11,12},
//     {20,21,22},
//     {30,31,32}
//     };
//     int rowsize=3;
//     int colsize=3;

//     Tranposeofmatrix(arr,rowsize,colsize);

//     return 0;
// }
//__________________________________________________________________________________________________________
