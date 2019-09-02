#include<stdio.h>
int main()
{
char p[101],q[101],r[101];
int A[26]={0},C[26]={0},flag=1;
scanf("%s",p);
scanf("%s",q);
scanf("%s",r);
for(int i=0;p[i]!='\0';i++)
A[p[i]-'A']++;
for(int i=0;q[i]!='\0';i++)
A[q[i]-'A']++;
for(int i=0;r[i]!='\0';i++)
C[r[i]-'A']++;
for(int i=0;i<26;i++)
if(A[i]!=C[i])
{
flag=0;
break;
}
if(flag==1)
printf("YES");
else
printf("NO");
}