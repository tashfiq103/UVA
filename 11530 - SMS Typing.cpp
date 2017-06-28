#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,t,n;
    char a[1000],b[10];
    while(scanf("%d",&t)!=EOF)
    {
        scanf("%c",&b);
        for(i=1;i<=t;i++)
        {
            gets(a);
            n=0;
            l=strlen(a);
            for(j=0;j<l;j++)
            {
                if(a[j]=='a') n=n+1;
                else if(a[j]=='b') n=n+2;
                else if(a[j]=='c') n=n+3;
                else if(a[j]=='d') n=n+1;
                else if(a[j]=='e') n=n+2;
                else if(a[j]=='f') n=n+3;
                else if(a[j]=='g') n=n+1;
                else if(a[j]=='h') n=n+2;
                else if(a[j]=='i') n=n+3;
                else if(a[j]=='j') n=n+1;
                else if(a[j]=='k') n=n+2;
                else if(a[j]=='l') n=n+3;
                else if(a[j]=='m') n=n+1;
                else if(a[j]=='n') n=n+2;
                else if(a[j]=='o') n=n+3;
                else if(a[j]=='p') n=n+1;
                else if(a[j]=='q') n=n+2;
                else if(a[j]=='r') n=n+3;
                else if(a[j]=='s') n=n+4;
                else if(a[j]=='t') n=n+1;
                else if(a[j]=='u') n=n+2;
                else if(a[j]=='v') n=n+3;
                else if(a[j]=='w') n=n+1;
                else if(a[j]=='x') n=n+2;
                else if(a[j]=='y') n=n+3;
                else if(a[j]=='z') n=n+4;
                else if(a[j]==' ') n=n+1;
            }
        printf("Case #%d: %d\n",i,n);
        }
    }
    return 0;
}
