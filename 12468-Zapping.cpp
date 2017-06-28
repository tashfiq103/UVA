#include <iostream>

#include <cmath>

using namespace std;

int main()

{

int a,b,c,r;

        for(int T=0;T<200;T++)
        {

            cin >> a >> b;

            if(a==-1 && b==-1){break;}

            if(0<=a && b <=99)
            {

                c=fabs(a-b);

                if(c<=49)

                cout << c << endl;

                else cout << 100-c << endl;

            }

        }

return 0;
}
