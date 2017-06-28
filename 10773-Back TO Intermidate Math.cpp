#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
int T;
double u,v,d,r1,r2,r3;
while(cin>>T){
for(int i=1;i<=T;i++){
cin >> d >> v >> u;
if(d==0 || u==0 || v>=u){
cout << "Case " << i << ": " << "can't determine" << endl;
}
else
{
r1=d/u;
r2=d/sqrt((u*u)-(v*v));
r3=fabs(r2-r1);
cout.setf(ios::fixed);
cout<< setprecision(3) << "Case " << i << ": " << r3 << endl;
}
}
}
return 0;
}
