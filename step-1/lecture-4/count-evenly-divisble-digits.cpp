//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int N)
    {
        int original = N;
        int count = 0;
        
        while (original > 0)
        {
            int lastDigit = original % 10;
            if (lastDigit > 0 && N % lastDigit == 0)
            {
                count++;
            }
            
            original /= 10;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends