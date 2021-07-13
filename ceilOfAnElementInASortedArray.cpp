#include <iostream>
using namespace std;
int binSearch(int a[],int n, int num){
  int low,high,mid;
  low=0;
  high=n-1;
  int res;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
      return mid;
    else if(num<a[mid])
    {
      res=mid;
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
      
  }
  return res;
}
int main()
{
  int a[]={1,2,3,4,8,10,10,11,12,19};
  int n=10;
  int num=5;
  int pos=binSearch(a,n,num);
  cout<<pos;
}