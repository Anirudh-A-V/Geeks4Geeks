//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    void swap(long long *a, long long *b)
    {
        long long temp = *a;
        *a = *b;
        *b = temp;
    }

    void reversegroup(vector<long long> &arr, int n, int k)
    {
        for (int i = 0; i < floor(k / 2); i++)
        {
            swap(&arr[n + i], &arr[(n + k) - i - 1]);
        }
    }

    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {

        for (int i = 0; i <= (n / k); i++)
        {
            if (i < (n / k))
            {
                reversegroup(arr, (k * i), k);
            }
            else
            {
                if ((n % k) != 0)
                {
                    reversegroup(arr, (k * i), (n % k));
                }
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr;
        int k;
        cin >> k;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);

        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends