#include<stdio.h>
int main()
{
	int a,b,c,n;
	int flag=1;
	scanf("%d",&n);
	for(a=0;a<n/5;a++)
	{
		for(b=0;b<n/3;b++)
		{
			c=n-a-b;
			if(5*a+3*b+c/3==n&&a+b+c==n&&c%3==0)
			{
				printf("%d %d %d\n",a,b,c);
				flag=0;
			}
		}
	}
	if(flag==1)
	{
		printf("No Answer.\n");
	}
}
