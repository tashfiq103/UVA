#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long int n,r;
while(cin >> n)
    {
    if(n==0)break;
    r=sqrt(n);
    if(r*r==n)
        {
            cout << "yes" << endl;
        }
    else cout << "no" << endl;
    }
return 0;
}
