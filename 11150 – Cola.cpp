#include<iostream>
using namespace std;
int main()
{
int N,r;
while(cin >>N)
    {
    int e=0,M;
    M=N;
    for(int i=0;N>=2;i++)
        {
        r=N%3;
        e+=N/3;
        N=N/3+r;
        if(N==2)
            {
            e++;
            break;
            }
        }
    cout << e+M << endl;
    }
return 0;
}
