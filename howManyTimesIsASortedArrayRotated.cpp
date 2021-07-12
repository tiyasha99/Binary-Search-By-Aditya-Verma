//Array was sorted at first, but now it was rotated. we need to find the no. of times it waas rotated

#include <iostream>
using namespace std;
int freq(int a[],int n)
{
  int pivot=-1;
  int s=0;
  int e=n-1;
  int mid;
  if(a[s]<a[e])
    return 0;
  while(s<=e)
  {
    if(a[s]<a[e])
      return s;
    mid=s+(e-s)/2;
    int next=(mid+1)%n;
    int prev=(mid-1+n)%n;
    if(a[mid]<=a[next] && a[mid]<=a[prev]){
      return mid;
      break;
    }
   if(a[s]<a[mid])
      s=mid+1;
   else if(a[mid]<=a[e])
      e=mid-1;


  }
}
int main(){
  int a[]={11,12,15,18,2,5,6,8};
  int n=8;
  int num=10;
  int pos=freq(a,n);
  
  cout<<pos;
}