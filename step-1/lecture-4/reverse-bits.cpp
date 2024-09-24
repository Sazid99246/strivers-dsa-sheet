#include <bits/stdc++.h>
using namespace std;

long reverseBits(long n)
{
    long result = 0;
    for (int i = 0; i < 32; i++)
    {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        cout << reverseBits(N) << endl;
    }
    return 0;
}