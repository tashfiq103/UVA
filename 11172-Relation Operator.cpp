#include<iostream>
using namespace std;
int main()
{
int a[50],t,p,q,r;
while(cin >> t){
    for(int i=1;i<=t;i++){
        int b=0,c=0;
        cin >> p >> q >> r;
        for(int j=0;j<p;j++){
        cin >> a[j];
        for(int j=0;j<p;j++){
            if(a[j]<=r){
            b++;
            }

        }
    }
}
}
return 0;
}
