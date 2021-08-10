// method to find no of prime below a number n
// using primality test and seive

#include <iostream>
#define ll long long
using namespace std;

void printPrime(int n)                // function to print prime no
{
    ll int mx=1000000;
    ll int i,j,prime[mx];
    for(i=0;i<mx;i++)
    {                            // composite = 0,   prime  = 1
        prime[i] = 1;            // intilizing all no as prime
    }
    
    // 0 and 1 are not prime
    prime[0]=prime[1]=0;

    // seive method to get prime numbers
    for(i=2;i*i<=mx;i++)
    {
        if(prime[i]==1)           // checking only if number is prime
        {
            for(j=i*i;j*j<=mx;j+=i)
            {
                prime[j]=0;
            }
        }
    }

   // getting prime numbers
    for(i=0;i<n;i++)
    {
        if(prime[i]==1)         // if prime[i] == 1/true
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    cout<<"enter no of test : ";
    cin>>t;
    while(t--)
    {
        int num;
        cout<<"enter the range : ";
        cin>>num;                        // input as (range) from user
        printPrime(num);
    }
    return 0;
}

