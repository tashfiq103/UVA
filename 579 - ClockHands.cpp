#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int i,j,k=0,l,a,b,s,r,n,x[100000],y[100000];

    for(i=1; ;i++)
    {
        r=0;
        for(j=1;j<=i;j++)
        {
            if(r==0)
            {
                a=i;
                b=j;
                r=1;
            }
            x[k]=a;
            y[k]=b;
            k++;
            if(k==100000)
            {
                s=1;
                break;
            }
            a--;
            b++;

        }
        if(s==1) break;
    }

    while(scanf("%lld",&n)!=EOF)
    {
        printf("%lld/%lld\n",x[n-1],y[n-1]);
    }
    return 0;
}
