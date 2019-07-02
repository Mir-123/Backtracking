#include<bits/stdc++.h>
#define N 4
using namespace std;
int matrix[N][N];
int sol[N][N];
bool isvalid(int x,int y)
{
  if(x>=0 && x<N && y>=0 && y<N && matrix[x][y]==1)
    return true;
  return false;
}
void maze(int r,int c)
{
  if(r==N-1 && c==N-1)
  {
    int i,j;
    for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
      {
        cout<<sol[i][j]<<" ";
      }
      cout<<endl;
    }
    return;
  }
  if(isvalid(r,c+1))
  {
    sol[r][c+1]=1;
    maze(r,c+1);
    sol[r][c+1]=0;
  }
  if(isvalid(r+1,c))
  {
    sol[r+1][c]=1;
    maze(r+1,c);
    sol[r+1][c]=0;
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
      cin>>matrix[i][j];
      sol[i][j]=0;
    }
  }
  sol[0][0]=1;
  maze(0,0);
  return 0;
}
