#include<stdio.h>
int main()
{
  int x,i,a[100],count=0,n,y;
    scanf("%d",&x);
    if(x<0)
        {
         printf("fu ");	
         x=(-x);
		}
    for(i=0;;i++)
  {
    n=x%10;
    a[i]=n;
    y=x/10;
    x=y;
    count++;
      if(y==0)
          break;
  }
   for(i=count-1;i>0;i--)
    {
        switch(a[i])
        {
            case 0:printf("ling ");break;
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            case 9:printf("jiu ");break;
        }
    }
    switch(a[0])
    {
      case 0:printf("ling\n");break;
      case 1:printf("yi\n");break;
      case 2:printf("er\n");break;
      case 3:printf("san\n");break;
      case 4:printf("si\n");break;
      case 5:printf("wu\n");break;
      case 6:printf("liu\n");break;
      case 7:printf("qi\n");break;
      case 8:printf("ba\n");break;
      case 9:printf("jiu\n");break;      
    }
    return 0;
}
