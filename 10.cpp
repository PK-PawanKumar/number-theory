// finding prime divisor of a number
// better aproach

#include <iostream>
using namespace std;

void printFactor(int num)
{
    for (int i = 2; i * i <= num; i++) // not prime  and using primality test
    {
        if (num % i == 0)
        {
            int cnt = 0;
            while (num % i == 0)
            {
                num = num / i;
                cnt++;
            }
            if (cnt > 0)
                cout << i << "^" << cnt << " ";
        }
    }
    if (num > 1) // number is prime
        cout << num << "^" << 1 << endl;
}

int main()
{
    int n;
    cout << "enter number : "; // input from user
    cin >> n;
    printFactor(n); // calling function to print prime factor
    return 0;
}
