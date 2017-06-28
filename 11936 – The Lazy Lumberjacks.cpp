#include<iostream>

using namespace std;

int main()

{

int a,b,c,T;

    while(cin>>T)
    {

        for(int i=0;i<T;i++){

        cin >> a >> b >> c;

        if(a+b>c && b+c>a && c+a>b)
        {

            cout << "OK" << endl;

        }

        else cout << "Wrong!!" << endl;

        }

    }

return 0;
}
