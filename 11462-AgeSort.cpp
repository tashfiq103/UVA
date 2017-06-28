#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main()
{
long long int T,a[1000000];
while(cin >> T){
if(T==0)break;
for(int i=0;i<T;i++){
cin >> a[i];
}
std::sort(a,a+T);
for(int i=0;i<T;i++){
if(i==T-1)
{
std::cout << a[i] ;
}
else
{
std::cout << a[i] << ' ';
}
}
cout << endl;
}
}
