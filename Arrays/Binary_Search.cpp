//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int binarysearch(int arr[], int n, int k)
    {
        int first = 0, last = n - 1, mid;
        while (first <= last)
        {
            mid = (first + last) / 2;
            if (k < arr[mid])
            {
                last = mid - 1;
            }
            else if (k > arr[mid])
            {
                first = mid + 1;
            }
            else if (arr[mid] == k)
            {
                return mid;
            }
        }
        return -1;
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
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends