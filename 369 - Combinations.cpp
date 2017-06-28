#include<stdio.h>
#include<math.h>
int main()
{
    long long int m,n,i,j,k,l,d,ans;
    while(scanf("%lld %lld",&m,&n)!=EOF)
    {
        if(m==n && n==0) break;
        d=m-n;
        if(d>=n)
        {
            i=d+1;
            k=n;
        }
        else
        {
            i=n+1;
            k=d;
        }
        l=ans=1;
        for(;i<=m;i++)
        {
            ans*=i;
            while(1)
            {
                if(ans%l==0 && l<=k)
                {
                    ans/=l;
                    l++;
                }
                else break;
            }
        }
        printf("%lld things taken %lld at a time is %lld exactly.\n",m,n,ans);
    }
    return 0;
}
