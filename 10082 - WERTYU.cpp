#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,l;
    char x[1000];
    while(gets(x))
    {
        l=strlen(x);
        for(i=0;i<l;i++)
        {
            if(x[i]=='=') x[i]='-';
            else if(x[i]=='-') x[i]='0';
            else if(x[i]=='0') x[i]='9';
            else if(x[i]=='9') x[i]='8';
            else if(x[i]=='8') x[i]='7';
            else if(x[i]=='7') x[i]='6';
            else if(x[i]=='6') x[i]='5';
            else if(x[i]=='5') x[i]='4';
            else if(x[i]=='4') x[i]='3';
            else if(x[i]=='3') x[i]='2';
            else if(x[i]=='2') x[i]='1';
            else if(x[i]=='\\') x[i]=']';
            else if(x[i]==']') x[i]='[';
            else if(x[i]=='[') x[i]='P';
            else if(x[i]=='P') x[i]='O';
            else if(x[i]=='O') x[i]='I';
            else if(x[i]=='I') x[i]='U';
            else if(x[i]=='U') x[i]='Y';
            else if(x[i]=='Y') x[i]='T';
            else if(x[i]=='T') x[i]='R';
            else if(x[i]=='R') x[i]='E';
            else if(x[i]=='E') x[i]='W';
            else if(x[i]=='W') x[i]='Q';
            else if(x[i]=='\'') x[i]=';';
            else if(x[i]==';') x[i]='L';
            else if(x[i]=='L') x[i]='K';
            else if(x[i]=='K') x[i]='J';
            else if(x[i]=='J') x[i]='H';
            else if(x[i]=='H') x[i]='G';
            else if(x[i]=='G') x[i]='F';
            else if(x[i]=='F') x[i]='D';
            else if(x[i]=='D') x[i]='S';
            else if(x[i]=='S') x[i]='A';
            else if(x[i]=='/') x[i]='.';
            else if(x[i]=='.') x[i]=',';
            else if(x[i]==',') x[i]='M';
            else if(x[i]=='M') x[i]='N';
            else if(x[i]=='N') x[i]='B';
            else if(x[i]=='B') x[i]='V';
            else if(x[i]=='V') x[i]='C';
            else if(x[i]=='C') x[i]='X';
            else if(x[i]=='X') x[i]='Z';
            else if(x[i]==' ') x[i]=' ';
        }
    printf("%s\n",x);
    }
    return 0;
}
