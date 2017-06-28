#include<stdio.h>
#include<algorithm>
#include<sstream>
#include<vector>
#include<string.h>
#include<iostream>
#include<iostream>
#include<math.h>

using namespace std;

long long int gcd(long long int a,long long int b)
{
    long long int c,d,rem;
    c = max(a,b);
    d = min(a,b);
    while(true)
    {
        rem=c%d;
        if(rem==0) return d;
        c=d;
        d=rem;
    }
}


int main()
{
    long long int i,j,k,l,n,t,T,ans,result;

    vector<long long int> v;
    string str;
    while(scanf("%lld",&T)==1)
    {
        getchar();
        for(t=0;t<T;t++)
        {
            ans=0;
            getline(cin,str);
            stringstream ss (str);
            while(ss >> n)
            {
                v.push_back(n);
            }
            l= v.size();

            for(i=0;i<l;i++)
            {
                for(j=i+1;j<l;j++)
                {
                    result=gcd(v[i],v[j]);
                    ans = max(ans,result);
                }
            }
            printf("%lld\n",ans);
            v.clear();
            ss.clear();
        }
    }
    return 0;
}
