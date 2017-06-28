#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,l,t,T,n,a[25];
    while(scanf("%d",&T)!=EOF)
    {
        for(t=1;t<=T;t++)
        {
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("Case %d: %d\n",t,a[i/2]);
        }
    }
    return 0;
}
