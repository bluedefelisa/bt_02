#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 1 + 2*(n-1);
    for(int i = 1; i <= n; i++)
    {
        for(int j = i ; j >= 1; j--) cout <<" ";
        for(int k = s; k >= 1; k--) cout <<"*";
        cout << endl;
        s = s - 2;
    }
}
