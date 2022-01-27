#include<stdio.h>
int f(int n)
{
	if(n<4)
	  return n;
	else
	  return f(n-1)+f(n-3);
}
int main()
{
	int n,m;
	scanf("%d",&n);
	m=f(n);
	printf("%d",m);
}
