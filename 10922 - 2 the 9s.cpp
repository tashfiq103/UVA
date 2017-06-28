#include<stdio.h>
#include<string.h>

int l;

int func(int b)
{
    int i,c;
    c=0;
    while(1)
    {
        i=b%10;
        c+=i;
        b/=10;
        if(b==0) break;
    }
    b=c;
    l++;
    if(c%9==0 && c>9)
    {
        func(c);
    }
    else return l;
}

int main()
{
    int x,y,z;
    char a[100000];
    while(scanf("%s",&a)!=EOF)
    {
        l=1;
        y=strlen(a);
        x=0;
        for(z=0;z<y;z++)
        {
            x+=a[z]-'0';
        }

        if(x==0) break;
        else if(x==9) printf("%s is a multiple of 9 and has 9-degree 1.\n",a);
        else if(x%9==0)
        {
            func(x);
            printf("%s is a multiple of 9 and has 9-degree %d.\n",a,l);
        }
        else printf("%s is not a multiple of 9.\n",a);
    }
    return 0;
}
