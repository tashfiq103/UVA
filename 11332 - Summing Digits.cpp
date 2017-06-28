#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g;
    while(cin >> a)
    {
        if(a==0)
        {
            break;
        }
        c=0;
        e=0;
        g=0;
        for(int i=0;i<10;i++)
        {
            b=a%10;
            c+=b;
            a=a/10;
        }
        d=c%10;
        e+=d;
        c=c/10;
        e+=c;
        f=e%10;
        g+=f;
        e=e/10;
        g+=e;
        cout << g << endl;
    }
return 0;
}
