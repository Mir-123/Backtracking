#include<stdio.h>
void swap(char *s1,char *s2)
{
  char *temp = s1;
  s1 = s2;
  temp = s1;
}
void permut(char *s,int e,int n)
{
  static int count;
  if(e==n)
  {
    count++;
    printf("%d. -> %s",count,s);
    return;
  }
  int i;
  for(i=e;i<n;i++)
  {
    swap((s+e),(s+i));
    permut(s,e+1,n);
    swap((s+i),(s+e));
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  char s[n];
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%s",s);
  }
  return 0;
}
