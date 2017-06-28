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

int main()
{
    int n,m,i,j,k,l;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        m=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                m+=gcd(i,j);
            }
        }
        printf("%d\n",m);
    }
    return 0;
}
