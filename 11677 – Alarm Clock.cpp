#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int H1,M1,H2,M2,S,E,R,R4,R5;
while(cin >> H1 >> M1 >> H2 >> M2)
    {
    if(H1==0 && M1==0 && H2==0 && M2==0)break;
    S=(H1*60)+M1;
    E=(H2*60)+M2;
    R=fabs(S-E);
    if(S==E)
        {
        cout << 1440 << endl;
        }
    else if(S>E)
        {
        cout << 1440-R << endl;
        }
    else cout << R << endl;
    }
return 0;
}

