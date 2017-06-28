#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,l1,l2,x,y,z;
    char a[100000],b[100000],c[100000],d[100000];
    float r1,r2,r;
    while(gets(a))
    {
        gets(b);
        x=y=z=r1=r2=0;
        for(i=0;i<100000;i++)
        {
            c[i]='\0';
            d[i]='\0';
        }
        l1=strlen(a);
        l2=strlen(b);
        for(i=0,j=0;i<l1;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                c[j]=a[i]+32;
                j++;
            }
            else if(a[i]>='a' && a[i]<='z')
            {
                c[j]=a[i];
                j++;
            }
        }

        for(i=0,j=0;i<l2;i++)
        {
            if(b[i]>='A' && b[i]<='Z')
            {
                d[j]=b[i]+32;
                j++;
            }
            else if(b[i]>='a' && b[i]<='z')
            {
                d[j]=b[i];
                j++;
            }
        }

l1=strlen(c);
l2=strlen(d);

for(i=0;i<l1;i++)
{
if(c[i]=='a') x=1 ;
else if(c[i]=='b') x=2 ;
else if(c[i]=='c') x=3 ;
else if(c[i]=='d') x=4 ;
else if(c[i]=='e') x=5 ;
else if(c[i]=='f') x=6 ;
else if(c[i]=='g') x=7 ;
else if(c[i]=='h') x=8 ;
else if(c[i]=='i') x=9 ;
else if(c[i]=='j') x=10 ;
else if(c[i]=='k') x=11 ;
else if(c[i]=='l') x=12 ;
else if(c[i]=='m') x=13 ;
else if(c[i]=='n') x=14 ;
else if(c[i]=='o') x=15 ;
else if(c[i]=='p') x=16 ;
else if(c[i]=='q') x=17 ;
else if(c[i]=='r') x=18 ;
else if(c[i]=='s') x=19 ;
else if(c[i]=='t') x=20 ;
else if(c[i]=='u') x=21 ;
else if(c[i]=='v') x=22 ;
else if(c[i]=='w') x=23 ;
else if(c[i]=='x') x=24 ;
else if(c[i]=='y') x=25 ;
else if(c[i]=='z') x=26 ;
y+=x;
}

for(i=0;i<l2;i++)
{
if(d[i]=='a') x=1 ;
else if(d[i]=='b') x=2 ;
else if(d[i]=='c') x=3 ;
else if(d[i]=='d') x=4 ;
else if(d[i]=='e') x=5 ;
else if(d[i]=='f') x=6 ;
else if(d[i]=='g') x=7 ;
else if(d[i]=='h') x=8 ;
else if(d[i]=='i') x=9 ;
else if(d[i]=='j') x=10 ;
else if(d[i]=='k') x=11 ;
else if(d[i]=='l') x=12 ;
else if(d[i]=='m') x=13 ;
else if(d[i]=='n') x=14 ;
else if(d[i]=='o') x=15 ;
else if(d[i]=='p') x=16 ;
else if(d[i]=='q') x=17 ;
else if(d[i]=='r') x=18 ;
else if(d[i]=='s') x=19 ;
else if(d[i]=='t') x=20 ;
else if(d[i]=='u') x=21 ;
else if(d[i]=='v') x=22 ;
else if(d[i]=='w') x=23 ;
else if(d[i]=='x') x=24 ;
else if(d[i]=='y') x=25 ;
else if(d[i]=='z') x=26 ;
z+=x;
}

j=k=0;

j=y%10;
r1+=j;
y/=10;
j=y%10;
r1+=j;
y/=10;
j=y%10;
r1+=j;
if( (r1/10)>=0 )
{
    l=r1;
    r1=0;
    j=l%10;
    r1+=j;
    l/=10;
    j=l%10;
    r1+=j;
}
if( (r1/10)>=0 )
{
    l=r1;
    r1=0;
    j=l%10;
    r1+=j;
    l/=10;
    j=l%10;
    r1+=j;
}

j=k=0;

k=z%10;
r2+=k;
z/=10;
k=z%10;
r2+=k;
z/=10;
k=z%10;
r2+=k;
if( (r2/10)>=0 )
{
    l=r2;
    r2=0;
    j=l%10;
    r2+=j;
    l/=10;
    j=l%10;
    r2+=j;
}
if( (r2/10)>=0 )
{
    l=r2;
    r2=0;
    j=l%10;
    r2+=j;
    l/=10;
    j=l%10;
    r2+=j;
}

    if(r1>r2)
    {
        r=(r2/r1)*100;
    }
    else r=(r1/r2)*100;

    printf("%.2f %%\n",r);
    }
    return 0;
}
