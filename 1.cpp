// checking whether a number is prime no or not
// basic approach 


#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if(n==0 || n==1)
    return false;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    bool check = checkPrime(num);
    if(check)
    cout<<num<<" is prime no"<<endl;
    else
    cout<<num<<" is not prime number";
}