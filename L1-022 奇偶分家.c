#include<stdio.h>
int main()
{
  int n,a[1000],i,o=0,j=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
        o++;
    else
        j++;
  }
    printf("%d %d\n",j,o);
}
