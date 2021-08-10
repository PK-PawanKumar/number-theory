// finding nth prime number

#include <iostream>
#include <vector>
#define mx 1000000
bool prime[mx];
using namespace std;

// function to store prime;
void printPrime(int n)
{
    // prime - false
    // composite - true

    // base condition
    prime[0] = prime[1] = true;

    for (int i = 2; i * i <= mx; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * i; j <= mx; j += i) // using seive
            {
                prime[j] = true;
            }
        }
    }

    // store prime number;
    vector<int> v;
    for (int i = 0; i < mx; i++)
    {
        if (prime[i] == false)
        {
            v.push_back(i);
        }
    }
    cout << n << "th prime no is " << v[n - 1] << endl;
}

int main()
{
    cout << " enter the no of test cases : "; // np of test case
    int t;
    cin >> t;
    while (t--)
    {
        int nth;
        cout << "which nth prime no u want : ";
        cin >> nth;
        printPrime(nth); // calling function
    }
    return 0;
}