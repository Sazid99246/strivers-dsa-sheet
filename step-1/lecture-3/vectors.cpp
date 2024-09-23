#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }

    v.erase(v.begin() + 2, v.begin() + 4);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
