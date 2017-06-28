#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k,l,counter[26],alphabet[26],m,n,t,start,end;
    char input[10000],temp;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%c",&temp);
        memset(counter,0,sizeof(counter));
        memset(alphabet,0,sizeof(alphabet));
        for(t=0; t<n; t++)
        {
            gets(input);
            l=strlen(input);
            for(i=0; i<l; i++)
            {
                //Letter Checking
                if(input[i]=='A' || input[i]=='a') alphabet[0]=1;
                else if(input[i]=='B' || input[i]=='b') alphabet[1]=2;
                else if(input[i]=='C' || input[i]=='c') alphabet[2]=3;
                else if(input[i]=='D' || input[i]=='d') alphabet[3]=4;
                else if(input[i]=='E' || input[i]=='e') alphabet[4]=5;
                else if(input[i]=='F' || input[i]=='f') alphabet[5]=6;
                else if(input[i]=='G' || input[i]=='g') alphabet[6]=7;
                else if(input[i]=='H' || input[i]=='h') alphabet[7]=8;
                else if(input[i]=='I' || input[i]=='i') alphabet[8]=9;
                else if(input[i]=='J' || input[i]=='j') alphabet[9]=10;
                else if(input[i]=='K' || input[i]=='k') alphabet[10]=11;
                else if(input[i]=='L' || input[i]=='l') alphabet[11]=12;
                else if(input[i]=='M' || input[i]=='m') alphabet[12]=13;
                else if(input[i]=='N' || input[i]=='n') alphabet[13]=14;
                else if(input[i]=='O' || input[i]=='o') alphabet[14]=15;
                else if(input[i]=='P' || input[i]=='p') alphabet[15]=16;
                else if(input[i]=='Q' || input[i]=='q') alphabet[16]=17;
                else if(input[i]=='R' || input[i]=='r') alphabet[17]=18;
                else if(input[i]=='S' || input[i]=='s') alphabet[18]=19;
                else if(input[i]=='T' || input[i]=='t') alphabet[19]=20;
                else if(input[i]=='U' || input[i]=='u') alphabet[20]=21;
                else if(input[i]=='V' || input[i]=='v') alphabet[21]=22;
                else if(input[i]=='W' || input[i]=='w') alphabet[22]=23;
                else if(input[i]=='X' || input[i]=='x') alphabet[23]=24;
                else if(input[i]=='Y' || input[i]=='y') alphabet[24]=25;
                else if(input[i]=='Z' || input[i]=='z') alphabet[25]=26;

                //Number Of Letter;
                if(input[i]=='A' || input[i]=='a') counter[0]++;
                else if(input[i]=='B' || input[i]=='b') counter[1]++;
                else if(input[i]=='C' || input[i]=='c') counter[2]++;
                else if(input[i]=='D' || input[i]=='d') counter[3]++;
                else if(input[i]=='E' || input[i]=='e') counter[4]++;
                else if(input[i]=='F' || input[i]=='f') counter[5]++;
                else if(input[i]=='G' || input[i]=='g') counter[6]++;
                else if(input[i]=='H' || input[i]=='h') counter[7]++;
                else if(input[i]=='I' || input[i]=='i') counter[8]++;
                else if(input[i]=='J' || input[i]=='j') counter[9]++;
                else if(input[i]=='K' || input[i]=='k') counter[10]++;
                else if(input[i]=='L' || input[i]=='l') counter[11]++;
                else if(input[i]=='M' || input[i]=='m') counter[12]++;
                else if(input[i]=='N' || input[i]=='n') counter[13]++;
                else if(input[i]=='O' || input[i]=='o') counter[14]++;
                else if(input[i]=='P' || input[i]=='p') counter[15]++;
                else if(input[i]=='Q' || input[i]=='q') counter[16]++;
                else if(input[i]=='R' || input[i]=='r') counter[17]++;
                else if(input[i]=='S' || input[i]=='s') counter[18]++;
                else if(input[i]=='T' || input[i]=='t') counter[19]++;
                else if(input[i]=='U' || input[i]=='u') counter[20]++;
                else if(input[i]=='V' || input[i]=='v') counter[21]++;
                else if(input[i]=='W' || input[i]=='w') counter[22]++;
                else if(input[i]=='X' || input[i]=='x') counter[23]++;
                else if(input[i]=='Y' || input[i]=='y') counter[24]++;
                else if(input[i]=='Z' || input[i]=='z') counter[25]++;

            }
        }

        for(i=0;i<25;i++)
        {
            for(j=i+1;j<26;j++)
            {
                if(counter[i]<counter[j])
                {
                    swap(counter[i],counter[j]);
                    swap(alphabet[i],alphabet[j]);
                }
            }
        }

        for(i=0;i<26;i++)
        {
            j=i;
            while(counter[i]==counter[i+1])
            {
                i++;
            }
            sort(alphabet+j,alphabet+i);
        }

        for(i=0;i<26;i++)
        {
            if(alphabet[i]==1) printf("A %d\n",counter[i]);
            else if(alphabet[i]==2) printf("B %d\n",counter[i]);
            else if(alphabet[i]==3) printf("C %d\n",counter[i]);
            else if(alphabet[i]==4) printf("D %d\n",counter[i]);
            else if(alphabet[i]==5) printf("E %d\n",counter[i]);
            else if(alphabet[i]==6) printf("F %d\n",counter[i]);
            else if(alphabet[i]==7) printf("G %d\n",counter[i]);
            else if(alphabet[i]==8) printf("H %d\n",counter[i]);
            else if(alphabet[i]==9) printf("I %d\n",counter[i]);
            else if(alphabet[i]==10) printf("J %d\n",counter[i]);
            else if(alphabet[i]==11) printf("K %d\n",counter[i]);
            else if(alphabet[i]==12) printf("L %d\n",counter[i]);
            else if(alphabet[i]==13) printf("M %d\n",counter[i]);
            else if(alphabet[i]==14) printf("N %d\n",counter[i]);
            else if(alphabet[i]==15) printf("O %d\n",counter[i]);
            else if(alphabet[i]==16) printf("P %d\n",counter[i]);
            else if(alphabet[i]==17) printf("Q %d\n",counter[i]);
            else if(alphabet[i]==18) printf("R %d\n",counter[i]);
            else if(alphabet[i]==19) printf("S %d\n",counter[i]);
            else if(alphabet[i]==20) printf("T %d\n",counter[i]);
            else if(alphabet[i]==21) printf("U %d\n",counter[i]);
            else if(alphabet[i]==22) printf("V %d\n",counter[i]);
            else if(alphabet[i]==23) printf("W %d\n",counter[i]);
            else if(alphabet[i]==24) printf("X %d\n",counter[i]);
            else if(alphabet[i]==25) printf("Y %d\n",counter[i]);
            else if(alphabet[i]==26) printf("Z %d\n",counter[i]);
        }

    }
    return 0;
}
