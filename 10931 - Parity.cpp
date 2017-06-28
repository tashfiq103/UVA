#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[100000];
    long long i,j,k,l,n,r;
    while(scanf("%lld",&n)!=EOF)
    {
        i=j=k=r=0;
        if(n==0) break;
        for(l=0;l<100000;l++)
        {
            a[l]='';
            b[l]='';
        }
        while(1)
        {
            if(n%2==0)
            {
                a[i]=48;
            }
            if(n%2==1)
            {
                a[i]=49;
                r++;
            }
            if((n/2)==0)
            {
                a[i]=49;
                break;
            }
            n/=2;
            i++;
        }
        k=i;
        while(j<=i)
        {
            b[j]=a[k];
            j++;
            k--;
        }
        printf("The parity of %s is %d (mod 2).\n",b,r);
    }
return 0;
}
