#include<iostream>
using namespace std;
int main()
{
int N,M,i,j,k;
while(cin >>N){
k=0;
if(N==0)break;
for(i=1;i<=60;i++){
for(j=0;j<i;j++){
if(N==(i*i*i-j*j*j)){
k=1;
break;
}
}
if(k==1)
break;
}
if(k==1)cout<< i << " " << j << endl;
else cout << "No solution" << endl;
}
}
