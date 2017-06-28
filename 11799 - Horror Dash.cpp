#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,j,a[100000];
    while(cin>>t)
    {
        for(j=1;j<=t;j++)
        {
            cin >> n;
            for(i=0;i<n;i++)
            {
                cin >> a[i];
            }
            sort(a,a+n);
            cout << "Case " << j << ": " << a[n-1] << endl;
        }
    }
return 0;
}
