#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j,k;
    long long int n,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        r=fabs(n%10);
        printf("%lld\n",r);
    }
    return 0;
}
