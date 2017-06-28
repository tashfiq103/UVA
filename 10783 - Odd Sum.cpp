#include <iostream>
using namespace std;
int main()
{
    int T,a,b,c;
    while(cin >> T)
    {
        for(int j=1;j<=T;j++)
        {
            c=0;
            cin >> a >> b;
            for(int i=a;i<=b;i++)
            {
                if(a%2==1)
                {
                    c+=a;
                }
                a++;
            }
            cout << "Case " << j << ": " << c << endl;
        }
    }
return 0;
}
