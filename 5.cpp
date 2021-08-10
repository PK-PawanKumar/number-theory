// finding prime numbers in a interval
// using seive and primality test

// geeting prime number less than n
// using seive and primality test

#include <iostream>
#include <vector>
#define mx 1000000 // valid upto 10^6
#define ll long long
using namespace std;
ll int prime[mx];

void printPrime(ll int lower, ll int upper) // function to generate prime no below n
{
    // takin prime = 1
    // taking composite = 0
    ll i, j;
    for (int i = 0; i < mx; i++)
    {
        prime[i] = 1;
    }

    // 0 and 1 are composite
    prime[0] = prime[1] = 0;

    // eleminating composite numbers from array
    for (i = 2; i * i <= mx; i++)
    {
        //check if only no if prime to decrease time
        if (prime[i] == 1)
        {
            for (j = i * i; j <= mx; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    // declaring vector to store all prime numbers
    vector<ll int> v;

    // // inserting prime no in vector to store in case any use
    // for (i = 0; i < mx; i++)
    // {
    //     if (prime[i] == 1) // if number is prime
    //     {
    //         v.push_back(i);
    //     }
    // }

    for (i = lower; i < upper; i++)
    {
        if (prime[i] == 1) // if number is prime
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    cout << "enter the no of test : ";
    ll int test;
    cin >> test;
    while (test--)
    {
        ll int low, up;
        cout << "LIMIT lower and upper : ";
        cin >> low >> up;
        printPrime(low, up); // calling of function
    }
    return 0;
}
