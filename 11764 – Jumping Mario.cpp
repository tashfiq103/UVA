#include<iostream>
using namespace std;
int main()
{
int a[100],t,q;
while(cin>>t)
    {
    for(int i=1;i<=t;i++)
        {
        int l=0,s=0;
        cin >> q;
        for(int j=0;j<q;j++)
        cin >> a[j];
        for(int i=1;i<q;i++)
            {
                if(a[i-1]>a[i])
                    {
                s++;
                    }
                if(a[i]>a[i-1])
                    {
                    l++;
                    }
            }
cout << "Case " << i << ": " << l << " " << s << endl;
        }
    }
return 0;
}

