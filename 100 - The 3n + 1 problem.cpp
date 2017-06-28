#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,a,b,c,m,n,x,y;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        x=m;
        y=n;
        if(m>n)
        {
            k=m;m=n;n=k;
        }
        b=0;
        for(i=m;i<=n;i++)
        {
            j=i;
            c=1;
            while(j>1)
            {
                if(j%2==0) j/=2;
                else j=(3*j)+1;
                c++;
            }
            if(c>=b) b=c;
        }
        printf("%d %d %d\n",x,y,b);
    }
    return 0;
}
