#include<stdio.h>
int main()
{
  int n,k,count=0;
  int ti;
  scanf("%d\n",&n);
  scanf("%d\n",&k);
  for(int i=0;i<n;i++)
  {
      scanf("%d",&ti);
      if(ti%k==0)
      {
          count=count+1;

      }
  }
  printf("%d",count);
    return 0;
}