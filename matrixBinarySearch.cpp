#include <iostream>
#include <vector>
using namespace std;
vector <int> binSearch(int a[][4],int n, int m,int key){
  int i=0;
  int j=m-1;
  vector<int> v;
  while(i>=0 && i<=n-1 && j>=0 && j<=m-1)
  {
    if(a[i][j]==key)
    {
        v.push_back(i);
        v.push_back(j);
        return v;
    }
    else if(a[i][j]>key)
    {
      j--;
    }
    else if(a[i][j]<key)
    {
      i++;
    }
  }
  v.push_back(-1);
  return v;

}
int main(){
  int a[4][4]={
    {10,20,30,40},
    {15,25,35,45},
    {27,29,37,47},
    {35,33,39,50}
    };
  int m=4;
  int n=4;
  int key=29;
  vector<int> v;
  v=binSearch(a,n,m,key);
  for(int i=0;i<2;i++)
  {
    if(v[i]==-1)
      {
        cout<<-1;
        break;
      }
    else
      cout<<v[i]<<" ";
  }
}