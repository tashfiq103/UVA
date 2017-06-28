#include <stdio.h>
#include<string.h>
int main()
{
char a[100000],b[100000];
long long int i,j,x,y;
    while(scanf("%s %s",&a,&b)==2)
    {

        x=strlen(a);
        y=strlen(b);
        for(i=0,j=0;i<y;i++)
        {
            if(a[j]==b[i])
            {
                j++;
            }
        }
        if(x==j)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
return 0;
}
