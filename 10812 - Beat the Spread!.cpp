#include <iostream>
using namespace std;
int main()
{
    int x,y,z,a,b,T;
    while(cin>>T)
    {
        for(int i=0;i<T;i++)
        {
            cin >> a >> b;
            z=(a+b)%2;
            x=((a+b)/2)+z;
            y=x-b;
            if(x>=0 && y>=0 && a>=0 && b>=0 && z==0)
            {
                cout << x << " " << y << endl;
            }
            else
            {
                cout << "impossible" << endl;
            }

        }


    }
return 0;
}
