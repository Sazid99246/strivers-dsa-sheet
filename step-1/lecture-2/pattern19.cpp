#include <bits/stdc++.h>
using namespace std;

void symmetry(int n)
{
    int gap = 0;
    int gap2 = 8;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < gap; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        gap += 4;
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < gap2; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        gap2 -= 4;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    symmetry(n);
    return 0;
}