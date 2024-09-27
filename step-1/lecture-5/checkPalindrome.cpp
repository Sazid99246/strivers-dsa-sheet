#include <iostream>
#include <algorithm> // for transform, remove_if, reverse
#include <cctype>    // for isalnum, tolower
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        // Convert to lowercase and remove non-alphanumeric characters
        string filtered;
        for (char c : s)
        {
            if (isalnum(c))
            {
                filtered += tolower(c);
            }
        }

        // Check if the filtered string is the same forward and backward
        string reversed = filtered;
        reverse(reversed.begin(), reversed.end());

        return filtered == reversed;
    }
};

int main()
{
    string s;
    Solution solution;

    // Input the string
    getline(cin, s); // getline allows input with spaces

    // Output true or false
    cout << boolalpha << solution.isPalindrome(s) << endl;

    return 0;
}
