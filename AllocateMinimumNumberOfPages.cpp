#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isValid(vector<int> v,int n,int k,int mid){
  int student=1;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=v[i];
    if(sum>mid)
    {
      student++;
      sum=v[i];
      if(student>k)
        return false;
    }
  }
  return true;
}
int minAlloc(vector<int> v,int k)
{
  int start=*max_element(v.begin(),v.end());
  int end=0;
  int n=v.size();
  if(n<k)
    return -1;
  for(int i=0;i<n;i++)
    end+=v[i];
  int res=-1;
  int mid;
  while(start<=end)
  {
      mid=start + (end-start)/2;
      if(isValid(v,n,k,mid)==true)
      {
        res=mid;
        end=mid-1;
      }
      else
      {
        start= mid+1;
      }
  }
  return res;

}
int main()
{
  vector<int> v;
  int k=2;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  int ans=minAlloc(v,k);
  cout<<ans;
}
