#include<stdio.h>
int main()
{
    long long int n,i,j,k,l;
    while(scanf("%lld",&n)!=EOF)
    {
        i=0;j=1;
        if(n==0) break;
        for(l=1;l<=n;l++)
        {
            k=i+j;
            i=j;
            j=k;
        }
        printf("%lld\n",k);
    }
    return 0;
}
