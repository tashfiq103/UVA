#include<iostream>
using namespace std;
int main()
{
long long int a,b,c,d,T;
while(cin >> T)
    {
    for(int i=0;i<T;i++)
        {
        cin >> a >> b >> c >> d;
        if(a==b && b==c && c==d && d==a)
        cout << "square" << endl;
        else if( (a==b && c==d) || (a==c && b==d) || (a==d && b==c) )
        cout << "rectangle" << endl;
        else if(a<=b+c+d && b<=c+d+a && c<=d+a+b && d<=a+b+c)
        cout << "quadrangle" << endl;
        else cout << "banana" << endl;
        }
    }
return 0;
}
