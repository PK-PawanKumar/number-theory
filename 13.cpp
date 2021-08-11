// binary exponentiation
// using better aproach

#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void binaryExp(ll int n, ll int p)
{
    ll int result = 1;
    while (p != 0)
    {
        if ((p & 1) == 1) // power is odd
        {
            p--;
            result *= n;
        }
        else
        {
            p = p / 2;
            n = n * n;
        }
    }
    cout << result << endl;
}

int main()
{
    ll int n, p;
    cout << "enter number and power : ";
    cin >> n >> p;
    binaryExp(n, p);
}