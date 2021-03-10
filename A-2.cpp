
#include<iostream>

using namespace std;

int main()
{

    int k;
    cin >> k;
    while(k>0)
    {
        k=k/3;
        if(k < 3)
        {
            cout << k;
            break;
        }
    }
    return 0;

}
