#include <stdio.h>
int main()
{
    int i,j,k,l,counter;
    double H,U,D,F,f,calc;
    while(scanf("%lf %lf %lf %lf",&H,&U,&D,&F)!=EOF)
    {
        if(H==0 && U==0 && D==0 && F==0) break;

        calc=counter=0;
        F=(U*F)/100.0;

        while(1)
        {
            if(U<0.0) U=0.0;
            calc+=U;
            counter++;
            if(calc>H)
            {
                printf("success on day %d\n",counter);
                break;
            }
            else if(calc<0)
            {
                printf("failure on day %d\n",counter);
                break;
            }
            else
            {
                U-=F;
                calc-=D;
                if(calc<0)
                {
                    printf("failure on day %d\n",counter);
                    break;
                }
            }
        }
    }
    return 0;
}
