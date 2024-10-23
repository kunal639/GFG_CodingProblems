//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        int larg = arr[0]; int sec_larg=-1;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i] > larg)
            {
                sec_larg = larg;
                larg = arr[i];
            }
            else if(arr[i] < larg && arr[i] > sec_larg)
            {
                sec_larg = arr[i];
            }
        }
        return sec_larg;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends