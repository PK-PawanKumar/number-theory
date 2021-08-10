// method to find no of prime below a number n
// using primality test and seive
// bool to minimize memory space

#include <iostream>
#define ll long long
#define mx 1000000
using namespace std;
bool prime[1000000]; // intilizing global bool array
                     //  make  all element false

void printPrime(int n) // function to print prime no
{
    ll int i, j;

    // 0 and 1 are not prime
    prime[0] = prime[1] = true;

    // seive method to get prime numbers
    for (i = 2; i * i <= mx; i++)
    {
        if (prime[i] == false) // checking only if number is prime
        {
            for (j = i * i; j * j <= mx; j += i)
            {
                prime[j] = true; // true - composite , false -   prime
            }
        }
    }

    // getting prime numbers
    for (i = 0; i < n; i++)
    {
        if (prime[i]==false) // if prime[i] == 0/false
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cout << "enter no of test : ";
    cin >> t;
    while (t--)
    {
        int num;
        cout << "enter the range : ";
        cin >> num; // input as (range) from user
        printPrime(num);
    }
    return 0;
}
