#include <iostream>

using namespace std;

int main()

{
int L,W,H,T;

while(cin >> T){

        for(int i=0;i<T;i++)
        {cin >> L >> W >> H;

        if(L>20 || W >20 || H>20)

        cout << "Case " << i+1 << ": bad" << endl;

        else{

        cout << �Case � << i+1 << �: good� << endl;

        }

        }

    }

return 0;

}
