#include<iostream>
using namespace std;
int main()
{
int N,K,P,T,R;
while(cin >> T)
    {
    for(int i=1;i<=T;i++)
        {
        cin>> N >> K >> P;
        if(2<=N && N<= 23 && 1<=K && K<=N && 1<=P && P<=200)
            {
            R=K+P;
            while(R>N)R=R-N;
            cout << "Case " << i << ": " << R << endl;
            }
        }
    }
return 0;
}
