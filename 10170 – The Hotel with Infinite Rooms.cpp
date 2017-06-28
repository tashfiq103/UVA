#include<iostream>
using namespace std;
int main()
{
long int s,d,e,i;
while(cin >> s >> d)
    {
    e=0;
    for(i=s;;i++)
        {
        e+=i;
        if(e==d || e>d)
            {
            cout << i << endl;
            break;
            }
        }
    }
return 0;
}
