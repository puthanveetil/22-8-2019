#include<stdio.h>
int main()
{
int n, a=0, b=0, c=0, d=0, r;scanf("%d", &n);
int taxi[n];
for(int i=0; i<n; i++)
{
scanf("%d", &taxi[i]);
switch(taxi[i])
{
 
case 1: a++;
	break;
case 2: b++;
	break;
case 3: c++;
	break;
case 4: d++; 
	break;
 
}
 
 
}
 
if(a<c){
r = d +c +((b+1)/2); 
}
else
{
if(b%2==0){
r=d + c + b/2 + (a-c+3)/4;}
else
{
r = d+c+(b+1)/2+ (a-c+1)/4;
 
 
}
}
 
printf("%d", r);
 
}