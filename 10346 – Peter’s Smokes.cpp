#include<iostream>
using namespace std;
int main()
{
long int n,k,m;
while(cin >> n >> k)
    {
    m=n;
    int e=0,r;
    for(int i=0;n>=k;i++)
        {
        r=n%k;
        e+=n/k;
        n=n/k+r;
        }
    cout << e+m << endl;
    }
return 0;
}
