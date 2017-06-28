#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,nt,i,j,k,val[10],loc[10],max;
    while(scanf("%d",&t)!=EOF)
    {
        for(nt=1;nt<=t;nt++)
        {
            struct
            {
                char url[10000];
            }a[10];

            for(i=0;i<=9;i++)
            {
                scanf("%s %d",&a[i].url,&val[i]);
                loc[i]=val[i];
            }
            sort(val,val+10);
            max=val[9];

            printf("Case #%d:\n",nt);

            for(i=0;i<=9;i++)
            {
                if(max==loc[i])
                {
                    printf("%s\n",a[i].url);
                }
            }
        }
    }
    return 0;
}
