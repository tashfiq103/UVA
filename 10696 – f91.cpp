#include<iostream>
using namespace std;
int main()
{
int N,b;
while(cin >>N)
    {
    if(N==0)break;
    if(N>100) cout << "f91(" << N << ") = " << N-10 << endl;
    else cout << "f91(" << N << ") = " << 91 << endl;
    }
return 0;
}
