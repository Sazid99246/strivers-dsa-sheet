#include <bits/stdc++.h>
using namespace std;

void alphaTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = 65 + n - 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << char(k) << " ";
            k--;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    alphaTriangle(n);
    return 0;
}