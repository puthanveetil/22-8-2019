#include<stdio.h>
int main()
{
int n,m,i;
scanf("%d%d",&n,&m);
for(i=0;i<m;i++)
n=(n%10)?n-1:n/10;
printf("%d",n);
return 0;
}