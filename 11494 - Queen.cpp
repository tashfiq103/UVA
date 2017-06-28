#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,ans;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0) break;
        else if( x1==x2 && y1==y2 ) ans=0;
        else if( (x1==x2) || (y1==y2) ) ans=1;
        else if( fabs(x1-x2)==fabs(y1-y2) ) ans=1;
        else ans=2;
        printf("%d\n",ans);
    }
    return 0;
}
