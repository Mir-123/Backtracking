#include<bits/stdc++.h>
#include<algorithm>
#define N 8
using namespace std;
int board[N][N];
int rows[] = {  2, 1, -1, -2, -2, -1,  1,  2 };
int cols[] = {  1, 2,  2,  1, -1, -2, -2, -1 };
bool isvalid(int x,int y)
{
  if(x>=0 && x<N && y>=0 && y<N && board[x][y]==-1)
    return true;
  return false;
}
void knight(int r,int c,int count)
{
  if(count==N*N)
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
    cout<<endl<<endl<<endl;
    return;
  }
  int i;
  for(i=0;i<8;i++)
  {
      if(!(isvalid(r+rows[i],c+cols[i])))
        continue;
      board[r+rows[i]][c+cols[i]]=count;
      count++;
      knight(r+rows[i],c+cols[i],count);
      count--;
      board[r+rows[i]][c+cols[i]]=-1;
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
      board[i][j]=-1;
    }
  }
  board[0][0]=0;
  knight(0,0,1);
  return 0;
}
