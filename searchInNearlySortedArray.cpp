#include <iostream>
using namespace std;
int binSearch(int a[],int n, int num){
  int low,high,mid;
  low=0;
  high=n-1;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
      return mid;
    else if((mid-1)>=low && a[mid-1]==num)
      return mid-1;
    else if((mid+1)<=high && a[mid+1]==num)
      return mid+1;
    else if(num<a[mid])
      high=mid-2;
    else
      low=mid+2;
  }
}
int main()
{
  int a[]={5,10,30,20,40};
  int n=10;
  int num=30;
  int pos=binSearch(a,n,num);
  cout<<pos;
}