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
int binSearch(int a[],int low,int high, int num){
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
int main(){
  int a[]={3,1};
  int n=2;
  int num=0;
  int ans=0;
  int target=3;
  if(a[0]<a[n-1])
    {
      ans=binSearch(a,0,n-1,target);
      return ans;
    }
            
    if(n==1 && target!=a[0])
        return -1;
    else if(n==1 && target==a[0])
        return 0;
            
    int pos=freq(a,n);
    cout<<pos;
        
        
    if(target>=a[0])
    {
       ans=binSearch(a,0,pos,target);
       cout<<ans;
    }
           
    else if(target<=a[n-1])
      {
          ans=binSearch(a,pos,n-1,target);
          cout<<ans;
      }
    else 
        cout<<-1;
  
}