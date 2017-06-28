#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[100000];
    int i,j,k;
    while(gets(a))
    {
        k=strlen(a);
        for(i=0;i<k;i++)
        {
            b[i]=a[i]-7;
        }
        printf("%s\n",b);
        for(j=0;j<100000;j++)
        {
            b[j]='';
        }
    }
    return 0;
}
