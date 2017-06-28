#include <iostream>
#include <cmath>
using namespace std;
int main()
{
long long int a,b,c,T;
cin >> T;
for(int x=1;x<=T;x++){
cin >> a >> b >> c;
if(a+b <= c || b+c <= a || c+a < b){
cout << "Case "<< x <<": Invalid" << endl;
}
if(a==b || b==c || c==a){
cout << "Case " << x <<": Isosceles" << endl;
}
if(a==b && b==c && c==a){
cout << "Case " << x << ": Equilateral" << endl;
}
if(a!=b && b!=c && c!=a){
cout << "Case " << x << ": Scalene" << endl;
}
}
return 0;
}
