#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int binSearch(int a[],int n, int num){
  int low,high,mid;
  low=0;
  high=n-1;
  int flg=0;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
    {
      flg=1;
      return a[mid];
    }
      
    else if(num<a[mid])
      high=mid-1;
    else
      low=mid+1;
  }
  if(flg==0)
  {
    int c=abs(-1);
    return abs(a[low]-num)<abs(a[high]-num)?a[low]:a[high];
  }
}
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9,10};
  int n=10;
  int num=11;
  int pos=binSearch(a,n,num);
  cout<<pos;
}