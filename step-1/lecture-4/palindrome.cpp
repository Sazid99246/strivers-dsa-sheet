#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int reversed = 0;
        int original = x;
        while (original > 0)
        {
            if ((reversed > INT_MAX / 10) || (reversed < INT_MIN / 10))
            {
                return 0;
            }
            int lastDigit = original % 10;
            reversed = reversed * 10 + lastDigit;
            original /= 10;
        }
        return x == reversed;
    }
};

int main()
{
    int x;
    Solution s;
    cin >> x;
    cout << s.isPalindrome(x);
    return 0;
}
