#include <iostream>
using namespace std;
int main()
{
    long long int i=0,j,x,y,z;
    while(1)
    {
        i++;
        cin >> x >> y;
        z=x;
        if(x==-1 && y==-1)
        {
            break;
        }
        j=1;
        while((x<=y)&&(x!=1))
        {
            j++;
            if(x%2==0)
            {
                x/=2;
            }
            else
            {
                x=(3*x)+1;
            }
        }
        if(x>y)
        {
            j--;
        }
        cout << "Case " << i << ": A = " << z << ", limit = " << y << ", number of terms = " << j << endl;
    }
    return 0;
}
