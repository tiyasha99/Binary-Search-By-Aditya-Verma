//Given an infinite sorted binary array find the first occurrence of 1

#include <iostream>
#include <vector>
using namespace std;
int binSearch(int a[],int n, int num,int low,int high){
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
}
vector<int> lowHigh(int a[], int n, int num)
{
  int low=0;
  int high=1;
  while(num>a[high])
  {
    low=high;
    high=high*2;
  }
  vector<int> v;
  v.push_back(low);
  v.push_back(high);
  return v;
}
int main()
{
  int a[]={0,0,0,0,0,0,1,1,1,1};
  int n=10;
  int num=1;
  vector<int> v;
  v=lowHigh(a,n,num);
  int low=v[0];
  int high=v[1];
  int pos=binSearch(a,n,num,low,high);
  cout<<pos;
}