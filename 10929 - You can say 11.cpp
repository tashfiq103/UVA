#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    int i,j,k,l,x,y,z;
    while(scanf("%s",&a)!=EOF)
    {
        l=strlen(a);
        x=0;
        for(i=0;i<l;i++)
        {
            x=x*10+(a[i]-'0');
            x=x%11;
        }
        if(x==0 && l==1) break;
        else if(x==0) printf("%s is a multiple of 11.\n",a);
        else printf ("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
