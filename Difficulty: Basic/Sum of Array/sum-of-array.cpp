//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int sum(vector<int>& arr) {
        for(int i=1; i<arr.size(); i++)
        {
            arr[0] = arr[0] + arr[i];
        }
        return arr[0];
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        int ans = ob.sum(nums); // Pass the vector nums to the sum function
        cout << ans << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends