#include <iostream>
using namespace std;
int peak(int a[],int n, int num){
  int low,high,mid;
  low=0;
  high=n-1;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(mid > 0 && mid<(n-1))
    {
      if(a[mid]>=a[mid+1] && a[mid]>=a[mid-1])
          return mid;
      else if(a[mid-1]>a[mid])
          high=mid-1;
    else
      low=mid+1;
    }
    else if(mid==0)
    {
      if(a[mid]>a[1])
          return mid;
      else
        return 1;
    }
    else if(mid==n-1)
     {
        if(a[mid]>a[n-2])
          return mid;
        else 
          return n-2;
     }
    
  }
}
int binsearch1(int a[],int low,int high,int num){
  int mid;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
      return mid;
    else if(num<a[mid])
      high=mid-1;
    else
      low=mid+1;
  }
  return -1;
}
int binsearch2(int a[],int low,int high,int num){
  int mid;
  while(low<=high){
    mid=low+ (high-low)/2;
    if(a[mid]==num)
      return mid;
    else if(num<a[mid])
      low=mid-1;
    else
      high=mid+1;
  }
  return -1;
}
int main()
{
  int a[]={1,3,8,12,4,2};
  int n=6;
  int num=4;
  int pos=peak(a,n,num);
  int ans=binsearch1(a,0,pos-1,num);
  int ans1=binsearch2(a,pos,n-1,num);

  if(ans!=-1)
    cout<<ans;
  if(ans1!=-1)
   cout<<ans1;
}