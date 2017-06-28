#include<stdio.h>
#include<string.h>
int main()
{
    int array[105][105],a,b,c,d,i,j,k,l,r,f=1,z=1;
    char ch[105][105],temp;
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        scanf("%c",&temp);
        memset(array,0,sizeof(array));
        if(r==0 && c==0) break;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='*')
                {
                    array[i][j]=9;
                    array[i-1][j-1]++;
                    array[i-1][j]++;
                    array[i-1][j+1]++;
                    array[i][j-1]++;
                    array[i][j+1]++;
                    array[i+1][j-1]++;
                    array[i+1][j]++;
                    array[i+1][j+1]++;
                }
            }
        scanf("%c",&temp);
        }
        if (z > 1)
        {
            printf("\n");
        }
        printf("Field #%d:\n",f);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(array[i][j]>=9) printf("*");
                else printf("%d",array[i][j]);
            }
            printf("\n");
        }
    f++;
    z++;
    }
    return 0;
}
