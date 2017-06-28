#include<stdio.h>
#include<string.h>

int main()
{
    char question[100],answer[100],judge[100],mule[5];
    int t,i,j,run,length,space[100];
    while(scanf("%d",&t)!=EOF)
    {
        scanf("%c",&mule);
        for(run=1;run<=t;run++)
        {
            gets(question);
            gets(answer);

            for(i=0;i<100;i++)
            {
                judge[i]='';
            }

            if(strcmp(question,answer)==0) printf("Case %d: Yes\n",run);
            else
            {
                length=strlen(question);
                for(i=0,j=0;i<length;i++)
                {
                    if(question[i]!=' ')
                    {
                        judge[j]=question[i];
                        j++;
                    }
                }
                if(strcmp(judge,answer)==0) printf("Case %d: Output Format Error\n",run);
                else printf("Case %d: Wrong Answer\n",run);
            }
        }
    }
    return 0;
}
