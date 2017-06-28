#include<iostream>
using namespace std;
int main()
{
int N,e,f,c,r,t;
while(cin>>N)
{
    for(int i=0;i<N;i++)
    {
    cin >> e >> f >> c;
    int q=0;
    r=e+f;
    while(r>=c)
        {
        t=r%c;
        q+=(r/c);
        r=(r/c)+t;
        }
cout << q << endl;
    }
}
return 0;
}
