#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char str[100],temp,sqt;
    int i,j,k,l,n,z,r;
    while(scanf("%s",&str)!=EOF)
    {
        scanf("%c",&temp);
        l=strlen(str);
        n=0;
        z=1;
        for(i=0;i<l;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                n+=str[i]-96;
            }
            else
            {
                n+=str[i]-38;
            }
        }
        sqt=sqrt(n);
        for(i=2;i<=sqt;i++)
        {
            if(n%i==0) z=0;
        }
        if(z==1) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
