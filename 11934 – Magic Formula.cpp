#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,L,r;
while(cin >> a >> b >> c >> d >> L)
    {
    int ans=0;
    if(a==0 && b==0 && c==0 && d==0 && L==0)break;
    if(-1000 <=a,b,c<=1000 && d<1000000 && 0<=L<=1000)
        {
        for(int x=0;x<=L;x++)
            {
            r=a*(x*x)+(b*x)+c;
            if(r%d==0)ans++;
            else ans=ans+0;
            }
        cout << ans << endl;
        }
    }
return 0;
}
