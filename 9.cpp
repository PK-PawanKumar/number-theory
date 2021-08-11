// finding prime divisor of a number
// basic brute force method

#include <iostream>
using namespace std;

void printFactor(int num)
{
    for (int i = 2; i <=num; i++)
    {
        if (num % i == 0)
        {
            int cnt = 0;
            while (num%i==0)
            {
                num = num / i;
                cnt++;
            }
            if(cnt>0)
            cout << i << "^" << cnt << " ";
        }
    }
}

int main()
{
    int n;
    cout << "enter number : "; // input from user
    cin >> n;
    printFactor(n); // calling function to print prime factor
}