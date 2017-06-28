#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,m,o,p,q,i,j,k,l,t,x,y,z,count;
    char ch[10],temp;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        count=0;
        q=fabs(n-m)+1;
        for(i=n;i<=m;i++)
        {
            p=i;
            for(k=0;k<10;k++) ch[k]='\0';

            for(k=0;k<=3;k++)
            {
                o=p%10;
                ch[k]=(o+48);
                p/=10;
                if(p==0) break;
            }

            l=strlen(ch);
            for(x=0,y=l-1;x<(l/2);x++,y--)
            {
                temp=ch[x];
                ch[x]=ch[y];
                ch[y]=temp;

            }
            k=0;
            for(x=0;x<l-1;x++)
            {
                for(y=x+1;y<=l-1;y++)
                {
                    if(ch[x]==ch[y])
                    {
                        k=1;
                        break;
                    }
                }
                if(k==1) break;
            }
            if(k==1)
            {
                count++;
            }

        }
        printf("%d\n",q-count);
    }
    return 0;
}
