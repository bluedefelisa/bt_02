#include <iostream>
#include <cmath>

using namespace std;

bool checknt (int x)
{
    if (x < 2) return false;
    for ( int i = 2; i <= sqrt(x); i++)
        if (x % i ==0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    checknt(n);
    if(checknt(n)== true)
    {
        cout <<"yes";
    }
    else
    {
        cout <<"no";
    }

}
