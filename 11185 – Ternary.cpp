#include <iostream>
using namespace std;
int main()
{
long long int a,b,r[100000];
while(1)
{
cin >> a;
if(a<0) break;
if(a==0)
{
cout << “0″ << endl;
continue;
}
b=0;
for(int i=1;a>0;i++)
{
r[i]=a%3;
a=a/3;
b++;
}
if(a==!0) cout << “1″ ;
for(int j=b;j>0;j–)
{
cout << r[j];
}
cout << endl;
}
return 0;
}
