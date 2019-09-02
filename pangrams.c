#include<stdio.h>
int main()
{
int n,i,a[26]={0};
char s[100];
scanf("%d\n",&n);
gets(s);
for(i=0;s[i];i++)
{
if(s[i]>96)
{
a[s[i]-97]++;
}
else if(s[i]<=96)
{
a[s[i]-65]++;
}
}
for(i=0;i<26;i++)
{
if(a[i]==0)
{
printf("NO");
return 0;
}
}
printf("YES");
}