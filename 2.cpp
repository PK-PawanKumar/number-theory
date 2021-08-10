// checking whether a number is prime no or not
// better approach using primality test


#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if(n==0 || n==1)                    // 0 and 1 are not prime no
    return false;
    else
    {
        for(int i=2;i*i<=n;i++)          // decrease time complexity
        {
            if(n%i==0)
            return false;               // if divisible , not prime
        }
    }
    return true;                        // else it is prime
}

int main()
{
    int num;
    cout<<"Enter any number : ";          
    cin>>num;                           // input from user
    bool check;
    check = checkPrime(num);            // calling function


    if(check)                           // printing result
    cout<<num<<" is prime no"<<endl;
    else
    cout<<num<<" is not prime number";

    return 0;
}
