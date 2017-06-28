#include <stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    int c,d;
    c=max(a,b);
    d=min(a,b);
    while(true)
    {
        int rem = c%d;
        if(rem==0) return d;
        c=d;
        d=rem;
    }
}

int lcm(int a,int b)
{
   return (a / gcd(a, b)) * b;
}



int main()
{
    int n,m,i,j,k,l,t,T;
    while(scanf("%d",&T)!=EOF)
    {
        for(t=1;t<=T;t++)
        {
            scanf("%d %d",&m,&n);
            k=gcd(m,n);
            l=lcm(m,n);
            if(m==k && n==l && k<=l) printf("%d %d\n",k,l);
            else printf("-1\n");
        }
    }
    return 0;
}
