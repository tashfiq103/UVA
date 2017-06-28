#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,l,t,T,a[60],b,c;
    while(scanf("%d",&T)!=EOF)
    {
        for(t=0;t<T;t++)
        {
            scanf("%d",&l);
            b=0;
            for(k=0;k<l;k++)
            {
                scanf("%d",&a[k]);
            }

            for(i=0;i<(l-1);i++)
            {
                for(j=i+1;j<l;j++)
                {
                    if(a[i]>a[j])
                    {
                        c=a[j];
                        a[j]=a[i];
                        a[i]=c;
                        b++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",b);
        }
    }
    return 0;
}
