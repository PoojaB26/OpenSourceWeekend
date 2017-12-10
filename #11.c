#include <stdio.h>
int main()
{
int a,b,c;
printf("The numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("the largest no %d\n",a);
}
else
{
printf("the largest no %d\n",c);
}
else
{
if(b>c)
{
printf("the largest no %d\n",b);
}
else
{
printf("the largest no %d\n",c);
}
}
}
