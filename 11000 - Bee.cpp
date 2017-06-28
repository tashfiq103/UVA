#include<stdio.h>
int main()
{
    long long int i,j,k,l,f,m,n,t,M,F;
    while(scanf("%lld",&n)!=EOF)
    {
        f=1;
        m=0;
        if(n==-1) break;
        else if(n==0)
        {
            M=0;t=1;
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                M=m+f;
                f=m;
                f++;
                t=M+f;
                m=M;
            }
        }

        printf("%lld %lld\n",M,t);
    }
    return 0;
}
