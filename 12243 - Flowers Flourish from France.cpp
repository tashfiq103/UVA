#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char x[10000],y[10000],r=NULL;
    long long int p,q,z;
    while(1)
    {
        gets(x);
        if(strcmp(x,"*")==0)
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
        r=x[0];
        p=0,q=0;
        for(int j=0;j<z;j++)
        {
            if(x[j]==' ')
            {
                p++;
                if(x[j+1]==r)
                {
                    q++;
                }
            }
        }
        if(p==q)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
