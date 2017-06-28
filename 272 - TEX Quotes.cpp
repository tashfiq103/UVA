#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k=1,l;
    char x[100000],y[100000],z[5];
    while(gets(x))
    {
        for(i=0;i<100000;i++)
        {
            y[i]='\0';
        }
        l=strlen(x);
        for(i=0,j=0;i<l;i++,j++)
        {
            if(x[i]=='"' && k==1)
            {
                y[j]='`';
                j++;
                y[j]='`';
                k=2;
            }
            else if(x[i]=='"' && k==2)
            {
                y[j]='\'';
                j++;
                y[j]='\'';
                k=1;
            }
            else y[j]=x[i];
        }
        printf("%s\n",y);
    }
    return 0;
}
