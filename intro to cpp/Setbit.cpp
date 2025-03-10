//Finding SetBit
#include<iostream>
using namespace std;
int main()
{
    int num=3;
    int setbitcount=0;
    while(num!=0)
    {
        int lastbit=(num&1);
        if(lastbit==1)
        {
            setbitcount+=1;
        }
        num=num>>1;
    }
    cout<<"Total SetBitCount is:"<<setbitcount<<endl;
    return 0;
}