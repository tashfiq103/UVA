#include<iostream>
using namespace std;
int main()
{
long int T,N,R=0,W,a[10000];
while(cin>>T)
    {for(int i=0;i<T;i++){
    cin >> N;
    W=0;
        for(int j=0;j<N*3;j++)
        {cin >> a[j];
        }
        for(int l=0;l<N*3;l=l+3){
        R+=a[l]*a[l+2];
        W=1;
        }
        if(W==1)cout << R << endl;
        R=0;
    }
    }
return 0;
}


