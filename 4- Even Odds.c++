//https://codeforces.com/problemset/problem/318/A
#include <iostream>
using namespace std;
int main()
{
    long long n,k, ans;
    cin >> n >> k;
    if (k <= ((n + 1) / 2))
    {
        cout << k * 2 - 1;
    }
    else
    {
        cout << ( k - ((n + 1)/2)) * 2;
    }
}