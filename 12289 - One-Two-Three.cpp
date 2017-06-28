#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,l,t,T;
    char ch[10];
    while(scanf("%d",&T)!=EOF)
    {
        for(t=0;t<T;t++)
        {
            scanf("%s",&ch);
            l=strlen(ch);
            if(l==3 && ( (ch[1]=='n' && ch[2]=='e') ||  (ch[0]=='o' && ch[2]=='e') || (ch[0]=='o' && ch[1]=='n') ) ) printf("1\n");
            else if(l==3 && ( (ch[1]=='w' && ch[2]=='o') ||  (ch[0]=='t' && ch[2]=='o') || (ch[0]=='t' && ch[1]=='w') ) ) printf("2\n");
            else printf("3\n");
        }
    }
    return 0;
}
