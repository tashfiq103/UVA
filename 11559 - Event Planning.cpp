#include<stdio.h>
#include<string>
#include<time.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,N,B,H,W,p,a[20],i,j,k,l,hotel,bed,flag,flag1,flag2,ans,room;
    n=1;
    while(scanf("%d %d %d %d",&N,&B,&H,&W)!=EOF)
    {

        bool flag1=false,flag2=false;
        ans=99999999;
        for(hotel=0;hotel<H;hotel++)
        {
            scanf("%d",&p);

            if(p*N<=B)
            {
                flag1=true;
            }
            for(bed=0;bed<W;bed++)
            {
                scanf("%d",&room);
                if(room>=N)
                {
                    if(ans>p*N)
                    {
                        ans=p*N;
                        flag2=true;
                    }
                }
            }
        }
        if(flag1==true && flag2==true) printf("%d\n",ans);
        else printf("stay home\n");
    }
    return 0;
}
