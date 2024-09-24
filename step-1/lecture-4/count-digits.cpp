#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = log10(n) + 1;
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        cout << countDigits(N) << endl;
    }
    return 0;
}