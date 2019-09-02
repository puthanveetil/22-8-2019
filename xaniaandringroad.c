#include <stdio.h>
int main()
{
int n,m,i,a,b;
long long int c;
scanf("%d %d", &n, &m);
c = 0;
a = 1;
for (i=0;i<m;i++)
{
scanf("%d",&b);
c += (b>=a)?(b-a) : (b+n-a);
a=b;
}
printf("%lld\n",c);
return 0;
}