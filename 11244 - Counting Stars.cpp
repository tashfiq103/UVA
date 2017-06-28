#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,l,r,c,x,y,count;
    char mat[105][105],temp;
    while(scanf("%d %d",&r,&c)!=EOF)
    {
        scanf("%c",&temp);
        if(r==0 && c==0) break;
        x=r+1;
        y=c+1;
        for(i=0;i<=x;i++)
        {
            mat[i][0]='.';
            mat[i][y]='.';
        }
        for(i=0;i<=y;i++)
        {
            mat[0][i]='.';
            mat[x][i]='.';
        }

        count=0;
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                scanf("%c",&mat[i][j]);
            }
            scanf("%c",&temp);
        }
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                if(mat[i][j]=='*')
                {
                    if(mat[i-1][j-1]!='*' && mat[i-1][j]!='*' && mat[i-1][j+1]!='*' && mat[i][j-1]!='*' && mat[i][j+1]!='*' && mat[i+1][j-1]!='*' && mat[i+1][j]!='*' && mat[i+1][j+1]!='*')
                    {
                        count++;
                    }
                }
            }
        }

        printf("%d\n",count);

        for(i=0;i<=x;i++)
        {
            for(j=0;j<=y;j++)
            {
                mat[i][j]='\0';
            }
        }
    }
    return 0;
}
