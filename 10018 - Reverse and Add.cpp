#include<stdio.h>

int main()
{
    long long int i,j,k,l,t,T,x,y,z,num_length,count,least,number[15],temp,rev_numb,current_numb,numb,the_number;
    while(scanf("%lld",&T)!=EOF)
    {
        for(t=1;t<=T;t++)
        {
            scanf("%lld",&numb);
            current_numb=the_number=numb;
            count=least=0;
            for(k=0;k<50;k++)
            {
                num_length=0;
                while(current_numb>0)
                {
                    temp=current_numb%10;
                    //printf("temp = %lld, ",temp);
                    number[num_length]=temp;
                    num_length++;
                    current_numb/=10;
                }
                //printf("\n");
                rev_numb=0;

                for(i=0;i<num_length;i++)
                {
                    rev_numb+=number[i];
                    rev_numb*=10;
                }
                rev_numb/=10;
                //printf("rev_numb = %lld\n",rev_numb);
                if(the_number==rev_numb && least!=0)
                {
                    printf("%lld %lld\n",count,rev_numb);
                    break;
                }
                else
                {
                    current_numb=the_number+rev_numb;
                    the_number=current_numb;
                    count++;
                    //printf("current_numb = %lld\n",current_numb);
                    for(j=0;j<15;j++) number[j]=0;

                }
                least = 1;
            }
        }

    }
    return 0;
}
