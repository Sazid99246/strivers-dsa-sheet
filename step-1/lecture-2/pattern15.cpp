#include <bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char c = 'A'; c <= 'A' + (n - i - 1); c++)
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