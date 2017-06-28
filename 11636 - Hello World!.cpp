#include <iostream>
using namespace std;
int main()
{
    int i,j,k,t=0;
    while(cin >> k)
    {
        t++;
        j=1;
        if(k<0) break;
        for(i=0;j<k;i++)
        {
            j*=2;
        }
        if(k==1)
        {
            cout << "Case " << t << ": " << 0 << endl;
        }
        else
        {
            cout << "Case " << t << ": " << i << endl;
        }
    }
    return 0;
}
