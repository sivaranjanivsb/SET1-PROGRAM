#include<stdio.h>
void main()
{
int n,m,i,product=1;
printf(" enter the number");
scanf("%d %d",&n,&m);
for(i=1;i<=m;i++)
{
product=product*n;
}
printf(" product is %d",product);
}
