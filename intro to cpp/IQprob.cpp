//Duch National Falg Prob:Two pointer Way
// #include<iostream>
// using namespace std;
// int MoveAllNegToLeft(int *a, int n){
//     int i = 0; 
//     int j = n - 1;

//     while(i<j)
//     {
//       if(a[i] < 0){
//           i++;

//       }else if(a[j]>0){
//           j--;
//       }

//       else{
//           swap(a[i],a[j]);
//       }
//     }
// }
// int main(){
//     int a[ ]={1,2,-3,4,-5,6};
//     int n = sizeof(a)/sizeof(int);

//     cout<<"The ans is:"<<endl;

//     MoveAllNegToLeft(a,n);
//       for(int  i =0; i<n ;i++){
//         cout<<a[i]<<" ";
//       }
//     return 0;
// }
// _________________________________________________________________
//FIND MISSING ELEMENT.........METHOD 1:VISTING METHOD
#include<iostream>
#include<climits>
using namespace std;
void findmissingele(int *a,int n){
  for(int i=0; i<n; i++){
    int index  = abs(a[i]);
    if(a[index - 1] > 0){
      a[index - 1] *= -1;
    }
  }

  for(int i = 0; i < n; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  for(int i = 0; i < n; i++){
    if(a[i] > 0){
      cout<<"The Missing element is:"<<i+1<<endl;;
    }
  }
}
int main()
{
  int n;
  int a[] = {1,1,1,1,1,1,1,8};
  n = sizeof(a)/sizeof(int);

  findmissingele(a,n);
  return 0;
}