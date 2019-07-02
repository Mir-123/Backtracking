#include<bits/stdc++.h>
#define N 4
using namespace std;
char board[N][N];
bool isvalid(int x,int y)
{
  if(board[x][y]!='-')
    return false;
  int i,j;
  for(i=0;i<x;i++)
  {
    if(board[i][y]=='Q')
      return false;
  }
  i=x-1;j=y-1;
  while(i>=0 && j>=0)
  {
    if(board[i][j]=='Q')
      return false;
    i--;j--;
  }
  i=x-1;j=y+1;
  while(i>=0 && j<N)
  {
    if(board[i][j]=='Q')
      return false;
    i--;j++;
  }
  return true;
}
void queen(int r)
{
  if(r==N)
  {
    int ao,bo;
    for(ao=0;ao<N;ao++)
    {
      for(bo=0;bo<N;bo++)
      {
        cout<<board[ao][bo]<<" ";
      }
      cout<<endl;
    }
    cout<<endl<<endl;
    return;
  }
  int j;
  for(j=0;j<N;j++)
  {
    if(!(isvalid(r,j)))
      continue;
    board[r][j]='Q';
    queen(r+1);
    board[r][j]='-';
  }
  return;
}
int main(void)
{
  int i,j;
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      board[i][j]='-';
    }
  }
  queen(0);
  return 0;
}
