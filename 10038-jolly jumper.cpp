#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k,l,n,input[3050],check[3050],count;
    while(scanf("%d",&n)!=EOF)
    {
        k=1;

        for(i=0;i<n;i++)
        {
            scanf("%d",&input[i]);
        }

        for(i=0;i<n-1;i++)
        {
            check[i]=fabs(input[i]-input[i+1]);
            //printf("chech[%d] = %d\n",i,check[i]);
        }



        sort(check,check+i);

        for(i=0;i<n-1;i++)
        {
            if(check[i]==check[i+1])
            {
                k=0;
                break;
            }
        }

        if(k==1) printf("Jolly\n");
        else printf("Not jolly\n");

    }
    return 0;
}
