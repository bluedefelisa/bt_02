#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 1;
    for(int i = n; i >0; i--)
    {
        for(int j = 1; j < i; j++) cout <<" ";
        for(int k = 1; k <= s; k++) cout <<"*";
        cout << endl;
        s = s + 2;
    }
}

