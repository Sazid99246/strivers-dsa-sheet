//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// } Driver Code Ends
class Solution
{
public:
    int n;
    int select(int arr[], int i)
    {
        int mini = INT_MAX;
        int j;
        for (; i < this->n; i++)
        {
            if (mini > arr[i])
            {
                mini = arr[i];
                j = i;
            }
        }
        return j;
    }

    void selectionSort(int arr[], int n)
    {
        this->n = n;
        for (int i = 0; i < n - 1; i++)
        {
            int mini = select(arr, i);
            swap(arr[i], arr[mini]);
        }
    }
};

//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000], n, T, i;

    scanf("%d", &T);

    while (T--)
    {

        scanf("%d", &n);

        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;
        ob.selectionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends