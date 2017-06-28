#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,l,g,a,b,c;
    char s1[150],s2[150];
    while(scanf("%d",&g)!=EOF)
    {
        if(g==0) break;
        else scanf("%s",&s1);
        l=strlen(s1);
        k=l/g;
        for(i=0;i<150;i++)
        {
            s2[i]='\0';
        }
        i=0;
        for(j=1;j<=g;j++)
        {
            c=(j*k)-1;
            b=1;
            for(a=c;b<=k;b++,a--)
            {
                s2[i]=s1[a];
                i++;
            }
        }
        printf("%s\n",s2);
    }
    return 0;
}
