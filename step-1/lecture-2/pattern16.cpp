#include <bits/stdc++.h>
using namespace std;

void alphaRamp(int n) {
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
        c++;
    }
    
}

int main()
{
    int n;
    cin >> n;
    alphaRamp(n);
    return 0;
}