#include <stdio.h>
int main()
{
  int a,sum=0,r;
printf("Enter a number");
scanf("%d",&a);
while(a>0)
{
r=a%10;
sum+=r;
a=a/10;
}
printf("Sum of digits %d",sum);
return 0;
}
