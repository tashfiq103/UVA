#include<iostream>
using namespace std;
int main()
{
long long int n;
while(cin >> n)
    {
    if(n==0)break;
    long long int m=1;
    while(m<n)
        {
        m*=2;
        m++;
        }
    if(m==n)cout << “Bob” << endl;
    else cout << “Alice” << endl;
    }
return 0;
}
