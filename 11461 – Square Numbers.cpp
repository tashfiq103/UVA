#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,ar,br,r;
float fr;
while(cin>> a >> b)
    {
    if(a==0 && b==0)break;
    ar=sqrt(a);
    fr=sqrt(a);
    br=sqrt(b);
    r=br-ar;
    if(fr==ar)
        {
        cout << r+1 << endl;
        }
    else cout << r << endl;
    }
return 0;
}
