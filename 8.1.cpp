// finding no of number less than n which are coprime with n
// phi(n)

#include <iostream>
#define ll long long
using namespace std;

ll int phi(int n)
{
    int answer = n;
    for (ll int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            answer = answer / i;
            answer = answer * (i - 1);
            while (n % i == 0)
            {
                n = n / i;
            }
        }
    }
    if (n > 1)
    {
        answer = answer / n;
        answer = answer * (n - 1);
    }
    return answer;
}

int main()
{
    int t;
    cout << "no of test case : ";
    cin >> t;
    while (t--)
    {
        ll int num, ans;
        cin >> num;
        ans = phi(num);
        cout << ans << endl;
    }
}