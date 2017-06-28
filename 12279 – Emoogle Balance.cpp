#include <iostream>
using namespace std;
int main()
{
int n,a[1000],b,c,k;
for(int j=1;j<=1000;j++)
    {
    k=0,b=0,c=0;
    cin >> n;
    if(n==0)break;
    for(int i=0;i<n;i++)
        {
        cin >> a[i];
        if(a[i]== 0)c++;
        else b++
        k=1;
        }
    if(k=1)cout << “Case ” << j << “: ” << b-c << endl;
    }
return 0;
}
