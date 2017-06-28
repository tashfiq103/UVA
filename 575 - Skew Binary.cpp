#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char d[100000];
long long int i,j,k,l,x;
while(scanf(“%s”,&d)!=EOF)
{
x=0;
l=strlen(d);
for(i=0,j=l;i<l;i++,j–)
{
k=d[i]-48;
x+=k*(pow(2,j)-1);
}
if(x==0) break;
else printf(“%lld\n”,x);
}
return 0;
}
