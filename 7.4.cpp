// finding binomial coefficiet
// C(n,k) = n!/((k!)*(n-k)!)
//        =  ((n!)%P)/((((k!)%P)*((n-k)!)%P))
// use of modulo helps in finding bc of large number

#include <iostream>
#define P 1000000007
#define ll long long
using namespace std;
ll int F[1000001];
ll int power(ll int base, ll int power, ll int m)
{
    ll int result = 1;
    m = P;
    while (power)
    {
        if (power & 1)
        {
            power--;
            result = (result * base) % m;
        }
        else
        {
            power /= 2;
            base = (base * base) % m;
        }
    }
    return result;
}

int C(ll int n, ll int k)
{
    if (n < k)
    {
        return 0;
    }
    else
    {
        ll int ans;
        // use of modulo inverse
        ans = F[n];
        ans = (ans * (power(F[k], P - 2, P)) % P);
        ans = (ans * (power(F[n - k], P - 2, P)) % P);
        return ans;
    }
}

void solution()
{
    ll int n, k;
    cout << "C(n,k) value of n and k : ";
    cin >> n >> k;
    cout << C(n, k) << endl;
}

int main()
{
    F[0] = F[1] = 1;
    for (ll int i = 2; i < 1000001; i++)
    {
        F[i] = (F[i - 1] * 1LL * i) % P;
    }
    cout << "no of test cases : ";
    ll int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}
