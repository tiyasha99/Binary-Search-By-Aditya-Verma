#include <iostream>
using namespace std;
int firstOcc(int a[],int n, int num){
  int low,high,mid;
  low=0;
  high=n-1;
  int res;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
    {
      res=mid;
      high=mid-1;
    }
      
    else if(num<a[mid])
      high=mid-1;
    else
      low=mid+1;
  }
  return res;
}
int lastOcc(int a[],int n, int num){
  int low,high,mid;
  low=0;
  high=n-1;
  int res;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
    {
      res=mid;
      low=mid+1;
    }
      
    else if(num<a[mid])
      high=mid-1;
    else
      low=mid+1;
  }
  return res;
}
int main()
{
  int a[]={2,4,10,10,10,18,20};
  int n=10;
  int num=10;
  int pos1=firstOcc(a,n,num);
  int pos2=lastOcc(a,n,num);
  cout<<pos2-pos1+1;
}