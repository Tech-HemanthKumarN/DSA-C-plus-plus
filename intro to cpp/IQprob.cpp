#include<iostream>
using namespace std;
int MoveAllNegToLeft(int *a, int n){
    int i = 0; 
    int j = n - 1;

    while(i<j)
    {
      if(a[i] < 0){
          i++;

      }else if(a[j]>0){
          j--;
      }

      else{
          swap(a[i],a[j]);
      }
    }
}
int main(){
    int a[ ]={1,2,-3,4,-5,6};
    int n = sizeof(a)/sizeof(int);

    cout<<"The ans is:"<<endl;

    MoveAllNegToLeft(a,n);
      for(int  i =0; i<n ;i++){
        cout<<a[i]<<" ";
      }
    return 0;
}