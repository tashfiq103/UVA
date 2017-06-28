#include<stdio.h>
int main()
{
    int mat[100][100],n,i,j,k,l,x,y,z,r,c;
    while(scanf("%d",&n)!=EOF)
    {
        //Rows >>>>
        if(n==0) break;
        r=c=x=y=0;
        for(i=0;i<n;i++)
        {
            k=0;
            for(j=0;j<n;j++)
            {
                scanf("%d",&mat[i][j]);
                k+=mat[i][j];
            }
            if(k%2==0) r++;
            else
            {
                x=i+1;
            }
        }
        //Coloums
        for(i=0;i<n;i++)
        {
            k=0;
            for(j=0;j<n;j++)
            {
                k+=mat[j][i];
            }
            if(k%2==0) c++;
            else
            {
                y=i+1;
            }
        }
        if((c+r)==(n*2)) printf("OK\n");
        else if(c==(n-1) && r==(n-1)) printf("Change bit (%d,%d)\n",x,y);
        else printf("Corrupt\n");

    }
    return 0;
}
