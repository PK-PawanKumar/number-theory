// finding modulo inverse
// concept
// a^(m-1) = a(mod(p))
// a^(m-2) = a^-1 (mod (p))
// so modulo inverse = a^(m-2)
// a,m must v co-prime
#include <iostream>
using namespace std;

int power(int base, int power, int m)
{
    int result = 1;
    while (power)
    {
        if (power & 1)
        {
            // power--;
            result = (result * base) % m;
        }
        // else
        {
            power /= 2;
            base = (base * base) % m;
        }
    }
    return result;
}

void solution()
{
    // number and modulo number to get modulo inverse
    int n, m;
    cin >> n >> m;
    cout << "modulo inverse = " << power(n, m - 2, m) << endl;
}

int main()
{
    cout << "no of test cases : ";
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}
