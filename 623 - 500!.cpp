#include<stdio.h>
int main()
{
    long long int i,j,k,m,n,carry,calc,array[10000],r;
    while(scanf("%lld",&n)!=EOF)
    {
        r=n;
        carry=0;
        array[0]=1;
        m=1;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                calc=(array[j]*i)+carry;
                array[j]=calc%10;
                carry=calc/10;
            }
            while(carry>0)
            {
                array[m]=carry%10;
                carry/=10;
                m++;
            }
        }
        printf("%lld!\n",r);
        for(i=m-1;i>=0;i--)
        {
            printf("%lld",array[i]);
        }
        printf("\n");
    }
    return 0;
}
