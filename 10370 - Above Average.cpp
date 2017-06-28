#include<stdio.h>
int main()
{
    int t,T,n,i,j,k,l,array[1050],count;
    double avg,ans;
    while(scanf("%d",&T)!=EOF)
    {
        for(t=1;t<=T;t++)
        {
            scanf("%d",&n);
            avg=count=0;
            for(k=0;k<n;k++)
            {
               scanf("%d",&array[k]);
               avg+=array[k];
            }
            avg=avg/n;

            for(k=0;k<n;k++)
            {
                if(array[k]>avg) count++;
            }
            ans=(count*100.0)/n;
            printf("%.3lf%%\n",ans);
        }
    }
    return 0;
}
