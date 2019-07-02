#include<bits/stdc++.h>
using namespace std;
bool is_subsequence(string s1,string s2,int i,int j)
{
  if(j==s2.length())
    return true;
  if(i==s1.length())
    return false;
  if(s1[i]==s2[j])
    return(is_subsequence(s1,s2,i+1,j+1));
  return(is_subsequence(s1,s2,i+1,j));
}

int main(void)
{
  string s1,s2;
  cin>>s1>>s2;
  cout<<is_subsequence(s1,s2,0,0);
  return 0;
}
