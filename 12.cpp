// finding binary exponentiation
// basic method

#include <iostream>
using namespace std;

// function to return ans
int getexp(int a, int b)
{
    int a2 = a;
    for (int i = 1; i < b; i++)
    {
        a = a * a2;
    }
    return a;
}

int main()
{
    int n, p, ans;
    cout << "enter number and its power : ";
    cin >> n >> p;
    ans = getexp(n, p);
    cout << n << "^" << p << " = " << ans << endl;
}