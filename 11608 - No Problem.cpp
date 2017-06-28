#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,T,n,p,q,x[10000],a,mn;
    while(cin >> T)
    {
    for(int z=1;z<=T;z++)
    {
        a=0;
        cin >> n >> p >> q;
        for(i=0;i<n;i++)
        {
            cin >> x[i];
        }
        sort(x,x+n);
        mn=min(p,n);
        for(j=0;j<mn;j++)
        {
            q-=x[j];
            if(q>=0)
            {
                a++;
            }
        }
        cout << "Case " << z << ": " << a << endl;
    }
    }
    return 0;
}
