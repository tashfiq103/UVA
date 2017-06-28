#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    char x[100000],y[100000],a[100000];
    long long int p,q,z,r,l,t,o,w,n;
    while(1)
    {
        o=0;
        for(int t=0;t<100000;t++)
        {
            y[t]='';
        }
        gets(x);
        if(strcmp(x,"DONE")==0)
        {
            break;
        }
        z=strlen(x);
        for(int i=0;i<z;i++)
        {
            if(x[i]>96 && x[i]<123)
            {
                x[i]=x[i]-32;
            }
        }
        for(int j=0,k=0;j<z;j++)
        {
            if(x[j]>64 && x[j]<91)
            {
                y[k]=x[j];
                k++;
            }
        }
        r=strlen(y);
        l=r-1;
        for(int m=0;m<r;m++)
        {
            a[m]=y[l];
            l--;
        }
        for(n=0;n<r;n++)
        {
            if(y[n]==a[n])
            {
                o++;
            }
        }
        if(n==o)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }
    }
    return 0;
}
