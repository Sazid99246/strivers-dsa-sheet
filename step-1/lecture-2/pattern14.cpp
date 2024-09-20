#include <bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char c = 'A'; c < 'A' + i; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    nLetterTriangle(n);
    return 0;
}