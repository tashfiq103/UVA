#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
    int e=0,r;
    if(n==0)break;
    else if(n==1)cout<< 0 << endl;
    else
    {
        for(int j=0;n>=2;j++)
        {
            r=n%3;
            e+=(n/3);
            n=n/3+r;
            if(n==2)
            {
                e++;
                break;
            }
        }
cout << e << endl;
    }
}
return 0;
}
