// euclid algorithm for gcd

#include <iostream>
using namespace std;

int euclidGCD(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        return euclidGCD(b, a % b);
    }
}

int main()
{
    cout << "enter two numbers : ";
    int x, y;
    cin >> x >> y;
    int ans = euclidGCD(x, y);
    cout << "gcd of " << x << " and " << y << " is " <<ans<<endl;
    return 0;
}