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
    else if(num<a[mid])
      low=mid+1;
    else
      high=mid-1;
      
  }
}
int main()
{
  int a[]={10,9,8,7,6,5,4,3,2,1};
  int n=10;
  int num=2;
  int pos=binSearch(a,n,num);
  cout<<pos;
}