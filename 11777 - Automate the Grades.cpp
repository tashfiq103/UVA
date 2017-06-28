#include<iostream>
using namespace std;
int main()
{
int T,t1,t2,f,a,s,r;
float c1,c2,c3;
while(cin >> T)
    {
    for(int i=1;i<=T;i++)
        {
        cin >> t1 >> t2 >> f >> a >> c1 >> c2 >> c3;
        if(c1<=c2 && c1<=c3)
        r=(c2+c3)/2;
        else if(c2<=c1 && c2<=c3)
        r=(c1+c3)/2;
        else if(c3<=c1 && c3<=c2)
        r=(c1+c2)/2;
        s=t1+t2+f+a+r;
        if(s>=90)
        cout << "Case " << i << ": A" << endl;
        if(80<=s && s<90)cout << "Case " << i << ": B" << endl;
        if(70<=s && s<80)cout << "Case " << i << ": C" << endl;
        if(60<=s && s<70)cout << "Case " << i << ": D" << endl;
        if(s<60)cout << "Case " << i << ": F" << endl;
        }
    }
return 0;
}
