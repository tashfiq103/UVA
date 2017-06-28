#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,l,l1,l2,p,q,r,s,t,T;
    long long int d1,d2,a,b,c,d;
    char x[10],y[10],z[20],space[5],b1[13],b2[13];
    while(scanf("%d",&T)!=EOF)
    {
        scanf("%c",&space[0]);
        for(t=0;t<T;t++)
        {
        gets(z);
        for(i=0;i<13;i++)
        {
            b1[i]='0';
            b2[i]='0';
        }

        for(i=0;i<10;i++)
        {
            x[i]='\0';
            y[i]='\0';
        }
        l=strlen(z);
        r=s=d1=d2=0;
        for(i=0,j=0;i<l;i++)
        {
            if(z[i]=='+')
            {
                s=1;
                r=1;
            }
            else if(z[i]=='-')
            {
                s=2;
                r=1;
            }
            else if(z[i]!=' ' && r==0)
            {
                x[i]=z[i];
            }
            else if(z[i]!=' ' && r==1)
            {
                y[j]=z[i];
                j++;
            }
        }
        l1=strlen(x);
        l2=strlen(y);
        for(i=0,j=l1-1;i<l1;i++,j--)
        {
            if(x[i]=='0') a=0;
            else if(x[i]=='1') a=1;
            else if(x[i]=='2') a=2;
            else if(x[i]=='3') a=3;
            else if(x[i]=='4') a=4;
            else if(x[i]=='5') a=5;
            else if(x[i]=='6') a=6;
            else if(x[i]=='7') a=7;
            else if(x[i]=='8') a=8;
            else if(x[i]=='9') a=9;
            else if(x[i]=='A') a=10;
            else if(x[i]=='B') a=11;
            else if(x[i]=='C') a=12;
            else if(x[i]=='D') a=13;
            else if(x[i]=='E') a=14;
            else if(x[i]=='F') a=15;

            d1+=(a*pow(16,j));
        }

        for(i=0,j=l2-1;i<l2;i++,j--)
        {
            if(y[i]=='0') a=0;
            else if(y[i]=='1') a=1;
            else if(y[i]=='2') a=2;
            else if(y[i]=='3') a=3;
            else if(y[i]=='4') a=4;
            else if(y[i]=='5') a=5;
            else if(y[i]=='6') a=6;
            else if(y[i]=='7') a=7;
            else if(y[i]=='8') a=8;
            else if(y[i]=='9') a=9;
            else if(y[i]=='A') a=10;
            else if(y[i]=='B') a=11;
            else if(y[i]=='C') a=12;
            else if(y[i]=='D') a=13;
            else if(y[i]=='E') a=14;
            else if(y[i]=='F') a=15;

            d2+=(a*pow(16,j));
        }

        if(s==1) d=d1+d2;
        else d=d1-d2;

        for(i=12;i>=0;i--)
         {
             if(d1<=0) break;
             else if(d1%2==1) b1[i]='1';
             else if(d1%2==0 )b1[i]='0';
             d1/=2;
         }

         for(i=12;i>=0;i--)
         {
             if(d2<=0) break;
             else if(d2%2==1) b2[i]='1';
             else if(d2%2==0 )b2[i]='0';
             d2/=2;
         }

         for(i=0;i<13;i++)
         {
             printf("%c",b1[i]);
         }

         if(s==1) printf(" + ");
         else printf(" - ");

         for(i=0;i<13;i++)
         {
             printf("%c",b2[i]);
         }

         printf(" = %lld\n",d);
        }
    }
    return 0;
}
