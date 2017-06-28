#include<stdio.h>
int main()
{
    int t,T,i,j,k,l,n,m,x,y,a,b;
    while(scanf("%d",&T)!=EOF)
    {
        if(T==0) break;
        scanf("%d %d",&n,&m);
        for(t=0;t<T;t++)
        {
            scanf("%d %d",&x,&y);
            if(n==x || m==y || (n==x && m==y) ) printf("divisa\n");
            else
            {
                a=x-n;
                b=y-m;
                if(a>0 && b>0) printf("NE\n");
                else if(a<0 && b>0) printf("NO\n");
                else if(a<0 && b<0) printf("SO\n");
                else printf("SE\n");
            }
        }
    }
    return 0;
}
