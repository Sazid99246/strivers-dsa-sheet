#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        int a = 0, b = 1, c, i;
        if (n == 0)
            return a;
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    int fibonacci = solution.fib(3);
    cout << fibonacci << endl;
    return 0;
}
