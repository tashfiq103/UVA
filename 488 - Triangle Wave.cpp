#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,l,t,T,a,b;
    while(scanf("%d",&T)!=EOF)
    {
        for(t=1;t<=T;t++)
        {
            scanf("%d %d",&a,&b);
            for(k=1;k<=b;k++)
            {
                for(i=1;i<=a;i++)
                {
                    for(j=1,l=i;j<=i;j++)
                    {
                        printf("%d",l);
                    }
                    printf("\n");
                }
                for(i=a-1;i>=1;i--)
                {
                    for(j=1,l=i;j<=i;j++)
                    {
                        printf("%d",l);
                    }
                    printf("\n");
                }
                if(k!=b) printf("\n");
            }
            if(t!=T) printf("\n");
        }
    }
    return 0;
}
