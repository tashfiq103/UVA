#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    int i,j,k,l,t,T;
    scanf("%d",&T);
        getchar();
        for(t=0;t<T;t++)
        {
            while(gets(s)!='\0')
            {
                l=strlen(s);
                if(l==0) break;

                for(i=0;i<l;i++)
                {
                    if(s[i]=='4') printf("A");
                    else if(s[i]=='8')printf("B");
                    else if(s[i]=='3')printf("E");
                    else if(s[i]=='6')printf("G");
                    else if(s[i]=='1')printf("I");
                    else if(s[i]=='0')printf("O");
                    else if(s[i]=='9')printf("P");
                    else if(s[i]=='5')printf("S");
                    else if(s[i]=='7')printf("T");
                    else if(s[i]=='2')printf("Z");
                    else printf("%c",s[i]);
                }
                printf("\n");
            }
            if(t!=T-1) printf("\n");
        }
    return 0;
}
