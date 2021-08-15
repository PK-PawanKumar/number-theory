// findind th last digit of pow(1378,n), for different n
// concept
// 1378 == congurent to  == 8 (mod 10)

#include <iostream>
using namespace std;

int lastdigit(int num)
{
    int base = 8; // similar to 1378
    int result = 1;
    while (num!=0)
    {
        if (num & 1)
        {
            num--;
            result = (result * base) % 10;
        }
        else
        {
            num = num/2;
            base = (base * base) % 10;
        }
    }
    return result;
}

int main()
{
    cout << "enter of test cases : ";
    int t;
    cin >> t;
    while (t--)
    {
        int ans;
        int num;
        cout << "enter power of 1378 : ";
        cin >> num;
        ans = lastdigit(num);
        cout << "last digit = " << ans << endl;
    }
}