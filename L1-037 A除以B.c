#include<stdio.h>
int main()
{
  float a,b;
  scanf("%f%f",&a,&b);
  if(b>0)
      printf("%.0f/%.0f=%.2f\n",a,b,a/b);
  else if(b<0)
      printf("%.0f/(%.0f)=%.2f\n",a,b,a/b);
  else if(b==0)
  {
      printf("%.0f/0=Error\n",a);
  }
}
