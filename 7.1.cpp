// Problem : 1 finding the last digit of a product
// product can can exceed 10^18 so this concept is ude
// (a)*(b) = c
// (a%n)*(b%n) = c%(n)  = last digit of c

#include <iostream>
#define ll long long
using namespace std;

ll int check_last_digit(ll int a, ll int b)
{
    return ((a%10)*(b%10))%10;
}

int main()
{
    ll int t;
    cout<<"test cases : ";
    cin>>t;
    while(t--)
    {
        ll int n,m,ans;
        cout<<"enter two number : ";
        cin>>n>>m;
        ans = check_last_digit(n,m);
        cout<<"last digit : "<<ans<<endl;
    }
}