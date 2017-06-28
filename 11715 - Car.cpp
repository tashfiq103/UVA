#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
double u,v,t,s,a;
int n,i=0;
while(cin>>n){
if(n==0)break;
i++;
switch(n){
case 1:
cin >> u >> v >> t;
a=(v-u)/t;
s=(u*t)+(0.5*a*t*t);
cout.setf(ios::fixed);
cout << setprecision(3) << "Case " << i << ": " << s << " " << a << endl;
break;
case 2:
cin >> u >> v >> a;
t=(v-u)/a;
s=(u*t)+(0.5*a*t*t);
cout.setf(ios::fixed);
cout << setprecision(3) << "Case " << i << ": " << s << " " << t << endl;
break;
case 3:
cin >> u >> a >> s;
v=sqrt( (u*u)+(2*a*s) );
t=(v-u)/a;
cout.setf(ios::fixed);
cout << setprecision(3) << "Case " << i << ": " << v << " " << t << endl;
break;
case 4:
cin >> v >> a >> s;
u=sqrt( (v*v)-(2*a*s) );
t=(v-u)/a;
cout.setf(ios::fixed);
cout << setprecision(3) << "Case " << i << ": " << u << " " << t << endl;
break;
}
}
return 0;
}
