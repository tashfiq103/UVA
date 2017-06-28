#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[100000],c[100000];
    int i,j,k,l,m1,m2,n,o,t,r,s,p;
    while(scanf("%d",&t)!=EOF)
    {
        for(o=0;o<t;o++)
        {
            scanf("%d",&n);
            s=n;
            i=j=k=l=p=m1=m2=0;
            if(n==0)
            {
                printf("0 0\n");
                continue;
            }
            for(r=0;r<100000;r++)
            {
                a[r]='';
                b[r]='';
            }
            while(1)
            {
                if(n%2==0)
                {
                    a[i]=48;
                }
                if(n%2==1)
                {
                    a[i]=49;
                    m1++;
                }
                if((n/2)==0)
                {
                    a[i]=49;
                    break;
                }
                n/=2;
                i++;
            }
            while(1)
            {
                b[k]=(s%10)+48;
                s/=10;
                k++;
                if(s==0) break;
            }
            p=strlen(b);
            for(j=0;j<p;j++)
            {
                if(b[j]==48) m2+=0;
                else if(b[j]==49) m2+=1;
                else if(b[j]==50) m2+=1;
                else if(b[j]==51) m2+=2;
                else if(b[j]==52) m2+=1;
                else if(b[j]==53) m2+=2;
                else if(b[j]==54) m2+=2;
                else if(b[j]==55) m2+=3;
                else if(b[j]==56) m2+=1;
                else if(b[j]==57) m2+=2;
                else if(b[j]==65) m2+=2;
                else if(b[j]==66) m2+=3;
                else if(b[j]==67) m2+=2;
                else if(b[j]==68) m2+=3;
                else if(b[j]==69) m2+=3;
                else m2+=4;
            }
        printf("%d ",m1);
        printf("%d\n",m2);
        }
    }
    return 0;
}
