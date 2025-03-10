//OR-->IF EITHER ONE IS TRUE KATHAM
//AND-->IT EXECUTE ONLY IF COMPLET TRUE
// HALLOW SQUARE

// #include<iostream>
// using namespace std;
// int main()
// {
//     int side;
//     cout<<"enter the side:"<<endl;
//     cin>>side;
//     // outer loop this for rows
//     for(int row=0; row<side; row++)
//     {
//         //inner loop this for column
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
//___________________________________________________________________________________________________
//HALLOW RECTANGLE 
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int length;
//     int width;
//     cout<<"enter the length:"<<endl;
//     cin>>length;
//     cout<<"enter the width:"<<endl;
//     cin>>width;

//     for(int row=0; row<length; row++)
//     {h
//         for(int col=0; col<width; col++)
//         {
//             if(row==0 || row==length-1)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 if(col==0 || col==width-1)
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
//  }
//___________________________________________________________________________________________________________
//DIAGONAL SQUARE 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int side;
//     cout<<"Enter the side:"<<endl;
//     cin>>side;
//     for(int row=0; row<side; row++)
//     {
//         for(int col=0; col<side; col++)
//         {
//             if(row==0 || row==side-1 || col==0 || col==side-1 || row==col)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//__________________________________________________________________________________________________
////DIAGONAL RECTANGLE 
//BUGS.......................

// #include<iostream>
// using namespace std;
// int main()
// {
//     int length;
//     int width; 
//     cout<<"enter the length:"<<endl;
//     cin>>length;
//     cout<<"enter the width:"<<endl;
//     cin>>width;

//     for(int row=0; row<length; row++)
//     {
//         for(int col=0; col<width; col++)
//         {
//             if(row==0 || row==length-1 || col==0 || col==width-1 || row==col)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//_________________OR_____________________________________________
// #include<iostream>
// using namespace std;
// int main()
// {
//     int length;
//     int width; 
//     cout<<"enter the length:"<<endl;
//     cin>>length;
//     cout<<"enter the width:"<<endl;
//     cin>>width;

//     for(int row=0; row<length; row++)
//     {
//         for(int col=0; col<width; col++)
//         {
//             if (row == 0 || row == length - 1 || col == 0 || col == width - 1 || row == (col * length) / width)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//___________________________________________________________________________________________________________
//HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value for n:"<<endl;
//     cin>>n;

//     for(int row=0; row<n; row++)
//     {
//         for(int col=0; col<row+1; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//________________________________________________________________________________________________________________
//INVERTED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value for n:"<<endl;
//     cin>>n;

//     for(int row=0; row<n; row++)
//     {
//         for(int col=0; col<n-row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//________________________________________________________________________________________________________________
// HALLOW HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value for n:"<<endl;
//     cin>>n;

//     for(int row=0; row<n; row++)
//     {
//         for(int col=0; col<row+1; col++)
//         {
//             if(row==0 || row==1 || row==n-1 || col==0 || col==row)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//____________________________________________________________________________________________________________________
// HALLOW HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main()
// { 
//     int n;
//     cout<<"Enter the value for n:"<<endl;
//     cin>>n;

//     for(int row=0; row<n; row++)
//     {
//         for(int col=0; col<n-row; col++)
//          {
//             if(row==0 || row==1 ||row==n-1|| col==0 || col==row-1)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// _____________________________________________________________
// INVERTED HALLOW HALF PYRAMID
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n; 
//     cout<<"Enter the value:"<<endl;
//     cin>>n;

//     for(int row=0; row<n; row++)
//     {
//         for(int col=0; col<n-row; col++)
//         {
//             if(row == 0 || col == n-row-1  || col == 0)
//             { 
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
//  }
// _____________________________________________
//FULL PYRAMID 
//INVERTED PYRAMID
//DAIMONDPATTERN
//HALLOW PYRAMID
//INVERTED HALLOW PYRAMID
//HALLOW DAIMOND PATTERN
 //MIXPYRAMID 
#include<iostream>
#include"assert.h"
using namespace std;
void fullpyramid(int n){
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n-row-1; col++)
        cout<<" ";
        for(int col=0; col<row+1; col++)
        cout<<"* ";
        cout<<endl;
    }
}
void invertedpyramid(int n){
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row; col++)
        cout<<" ";
        for(int col=0; col<n-row; col++)
            cout<<"* ";
            cout<<endl;
    }
}
void daimondpattern(int n){
    fullpyramid(n);
    invertedpyramid(n);
}
void hallowpyramid(int n){
   for(int row=0; row<n; row++)
   {
        for(int col=0; col<n-row-1; col++)
            cout<<" ";
            for(int col=0; col<row+1; col++)
        {
            if(row == 0 || /*row == n-1 || */  col == 0 || col == row)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
   }
}
void invertedhallowpyramid(int n){
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row; col++)
        cout<<" ";
        for(int col=0; col<n-row; col++){
            if(/*row == 0 || */ col == 0 ||row == n-1 || col == n-row-1)
            cout<<"* ";
            else
            cout<<"  ";
        }   
        cout<<endl;

    }

}
void hallowdaimondpattern(int n){
    hallowpyramid(n);
    invertedhallowpyramid(n);

}
void mixpyramid(int n){
      for(int row=0; row<n; row++)
      {
        for(int col=0; col<n-row; col++)
        cout<<"*";
        for(int col=0; col<2*row+1; col++)
        cout<<" ";
        for(int col=0; col<n-row; col++)
        cout<<"*";
        cout<<endl;    
      }
}
void invertedmixpyramid(int n){
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row+1; col++)
        cout<<"*";
        for(int col=0; col<2*(n-row)-1; col++)
        cout<<" ";
        for(int col=0; col<row+1; col++)
        cout<<"*";
        cout<<endl;
    }
}
void daimodmixpyramid(int n){
    mixpyramid(n);
    invertedmixpyramid(n);
}
void fancy12pattern(int n){
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<2*row+1; col++){

            // cout<<"$";
            if(col % 2 == 0)
            cout<<row+1;
            else
            cout<<"*";
        }
        cout<<endl;
    }
}
void fullfancy12pattern(int n){
    fancy12pattern(n);
    n--;
    //INVERTED PATTERN
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<2*(n-row)-1; col++){
            // cout<<"$";
            if(col  % 2 == 0)
            cout<<n-row;
            else
            cout<<"*";
        }
        cout<<endl;
    }

}
void abcpattern(int n){
    for(int row=0; row<n; row++)
    {
        char ch ='A'-1;  //ASCII 64 INITILALIZE
        for(int col=0; col<row+1; col++){
            ch++;
            cout<<ch;
        }
        cout<<endl;
    }
}
void abcdabcpattern(int n){
  for(int row=0; row<n; row++)
  {
    char ch ='A'; //ASCII 65 INIT
    for(int col=0; col<row+1; col++){
        cout<<ch;
        ch++;
    }

    ch--;

    while(ch >'A'){
        ch--;
        cout << ch;   
    }
    cout<<endl;
  }
}
void numerichallowhalfpyramid(int n){
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row+1; col++){
            if(col == 0 || col == row || row == n-1){
                cout<<col+1;
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void invertednumerichallowhalfpyramid(int n){
    for(int row=0; row<n; row++)
    {
        for(int col=row+1; col<=n; col++){
            if(col==row+1 || col == n || row == 0){
                cout<<col;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void numericpalindrome(int n){
    int k=n;
    
    for(int row=0; row<n; row++){
        int c=1;
        for(int col=0; col<k; col++){
            if(col<n-row-1){
                cout<<" ";
            }else if(col<=n-1){
                cout<<c;
                c++;
            }else if(col== n){
                c=c-2;
                cout<<c;
                c--;
            }else{
                cout<<c;
                c--;
            }
        }
        k++;
        cout<<endl;
    }
}
void solidhalfdaimond(int n){
    for(int row=0; row<2*n-1; row++)
    {
        int cond = 0;
        if(row<n){ //growing phase of diamond
            cond=row;
        }else{ //shrinking phase of diamod
            cond=n-(row%n)-2;
        }
        for(int col=0; col<=cond; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void heartPattern(int n) {
    for (int row = n / 2; row <= n; row += 2) {
        for (int col = 1; col < n - row; col += 2) {
            cout << " ";
        }
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        for (int col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }
        cout << endl;
    }
}
void fancypattern1(int n){
    assert( n <= 9);
    // if( n > 9 ){
    //     cout<<"Please put value less then or equal to 9"<<endl;
    //     return ;
    // }
    for(int row=0; row<n; row++){
        int start_num_index = 8 - row;
        int num = row+ 1;
        int count_num = num;
        for(int col=0; col<17; col++){
            if(col==start_num_index && count_num>0){
                cout<<num;
                start_num_index+=2;
                count_num--;
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void fancypattern2(int n){
    int c=1;
    for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            cout<<c;
            c++;
            if(col<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    // cout<<"C:"<<c<<endl;
    // shrinking phase
    int start = c-n;
    for(int row=0; row<n; row++){
        int k = start;
        for(int col=0; col<=n-row-1; col++){
            cout<<k;
            k++;
            if(col<n-row-1){
                cout<<"*";
            }
        }
        start = start-(n-row-1);
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the value:"<<endl;
    cin>>n; 
    // fullpyramid(n);               //FULL PYRAMID 
    // invertedpyramid(n);          //INVERTED PYRAMID
    // daimondpattern(n);          //DAIMOND PATTERN
    // hallowpyramid(n);          //HALLOW PYRAMID
    // invertedhallowpyramid(n);          //INVERTED HALLOW PYRAMID
    // hallowdaimondpattern(n);          //HALLOW DAIMOND PATTERN
    // mixpyramid(n);                   //MIXPYRAMID
    // invertedmixpyramid(n);          //INVERTED MIXPYRAMID
    // daimodmixpyramid(n);           //DAIMOND MIXPYRAMID
    // fancy12pattern(n);                   //FANCY12PATTERN
    // fullfancy12pattern(n);              //FULL FANCY12PATTERN
    // abcpattern(n);                     // ABC PATTERN
    // abcdabcpattern(n);                // ABCDABCPATTREN 
    // numerichallowhalfpyramid(n);     //NUMERIC HALLOW PYRAMID
    // invertednumerichallowhalfpyramid(n);       
    // numericpalindrome(n);
    // solidhalfdaimond(n);
    // heartPattern(n);
    // fancypattern1(n);
    // fancypattern2(n);
    
    return 0;
}
// ___________________________________________________________________
