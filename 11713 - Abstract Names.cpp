#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int i,j,k,l,l1,l2,t,T,c;
    char ch1[100],ch2[100];
    string s1,s2;
    while(scanf("%d",&T)!=EOF)
    {
        for(t=0;t<T;t++)
        {
            scanf("%s %s",&ch1,&ch2);
            s1=ch1;s2=ch2;
            l1=strlen(ch1); l2=strlen(ch2);
            if(s1==s2) printf("Yes\n");
            else if(l1==l2)
            {
                c=0;
                for(i=0;i<l2;i++)
                {
                    if(ch1[i]==ch2[i]) c++;
                    else if( (ch1[i]=='a' || ch1[i]=='e' || ch1[i]=='i' || ch1[i]=='o' || ch1[i]=='u' || ch1[i]=='0') && (ch2[i]=='a' || ch2[i]=='e' || ch2[i]=='i' || ch2[i]=='o' || ch2[i]=='u') ) c++;
                }
                if(c==l2) printf("Yes\n");
                else printf("No\n");
            }
            else printf("No\n");
        }
    }
    return 0;
}
