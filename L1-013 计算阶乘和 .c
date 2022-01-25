#include<stdio.h>
int main()
{
  int n,i,sum=0,p=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      p*=i;
      sum+=p;
  }
    printf("%d",sum);
}
