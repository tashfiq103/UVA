#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k,a[4],r,x,y,z,m,n,r1,r2;;
    while(cin >> t)
    {
        for(i=1;i<=t;i++)
        {
            r1=r2=0;
            for(j=0;j<=3;j++)
            {
                cin >> a[j];
                m=a[j];
                n=a[j];

                x=m%10;
                r1+=x;
                m/=100;
                x=m%10;
                r1+=x;

                n/=10;
                y=n%10;
                y=y*2;
                if(y>9)
                {
                    z=y%10;
                    r2+=z;
                    y/=10;
                    r2+=y;
                }
                else r2+=y;
                n/=100;
                n=n*2;
                if(n>9)
                {
                    z=n%10;
                    r2+=z;
                    n/=10;
                    r2+=n;
                }
                else r2+=n;
            }
            r=r1+r2;
            if(r%10==0) cout << "Valid" << endl;
            else cout << "Invalid" << endl;
        }
    }
    return 0;
}
