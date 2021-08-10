// geeting prime number less than n
// using seive and primality test
// less memory using bool

#include <iostream>
#define mx 1000000 // valid upto 10^6
#define ll long long
using namespace std;
bool prime[mx]; // bool at global have element as false

void printPrime(int limit) // function to generate prime no below n
{
    // takin prime = 0/false
    // taking composite = 1/true
    ll i, j;

    // 0 and 1 are composite
    prime[0] = prime[1] = true;

    // eleminating composite numbers from array
    for (i = 2; i * i <= mx; i++)
    {
        //check if only no if prime to decrease time
        if (prime[i] == false)
        {
            for (j = i * i; j <= mx; j += i)
            {
                prime[j] = true;
            }
        }
    }

    // printing prime no less than num
    for (i = 0; i < limit; i++)
    {
        if (prime[i] == false) // if number is prime
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
        ll int num;
        cout << "LIMIT : ";
        cin >> num;
        printPrime(num); // calling of function
    }
    return 0;
}
