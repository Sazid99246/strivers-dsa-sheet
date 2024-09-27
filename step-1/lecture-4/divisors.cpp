#include <bits/stdc++.h>
using namespace std;

int *printDivisors(int n, int &size)
{
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);

            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}