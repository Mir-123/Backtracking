#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>output;
void sub(vector<int> &a,int ele,int n)
{
  if(ele==n)
  {
    int j;
    int size=output.size();
    for(j=0;j<size;j++)
    {
      cout<<output[j];
      if(j!=size-1)
        cout<<",";
    }
    cout<<endl;
    return;
  }
  sub(a,ele+1,n);
  output.push_back(a[ele]);
  sub(a,ele+1,n);
  int val=output.size();
  output.erase(output.begin()+(val-1));
  return;
}
int main(void)
{
  int n,i;
  cin>>n;
  vector<int>a(n);
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sub(a,0,n);
  return 0;
}
