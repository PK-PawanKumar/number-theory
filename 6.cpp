//  c++ code to get prime prime no below n
// use of seive and primality test

#include <iostream>
#define mx 1000000 // valid upto 10^6
#define ll long long
using namespace std;
ll int prime[mx];

void printPrime(int limit) // function to generate prime no below n
{
    // takin prime = 1
    // taking composite = 0
    ll  i, j;
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
            for (j = i * i; j <= mx; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
    
    ll int count = 0,cnt=0;
    // printing prime no less than num
    for (i = 0; i < limit; i++)
    {
        if (prime[i] == 1) // if number is prime
        {
            count++;
            if(prime[count]==1)
            {
                cout<<i<<" ";
                cnt++;
            }
        }
    }
    cout <<endl<<"there are total "<<cnt<<" prime prime numbers below n"<< endl;
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
