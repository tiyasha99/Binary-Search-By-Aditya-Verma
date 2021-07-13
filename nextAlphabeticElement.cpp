#include <iostream>
using namespace std;
int binSearch(char a[],int n, int num){
  int low,high,mid;
  low=0;
  high=n-1;
  int res;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
      {
        low=mid+1;
      }
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
  char a[]={'a','c','h','s'};
  int n=4;
  char num='b';
  int pos=binSearch(a,n,num);
  cout<<pos;
}