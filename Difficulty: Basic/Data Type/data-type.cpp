//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str)
    {
        string arr[] = {"Character", "Integer", "Long", "Float", "Double"};
        if(str == arr[0])
        {
            return sizeof(char);
        }
        else if(str == arr[1])
        {
            return sizeof(int);
        }
        else if(str == arr[2])
        {
            return sizeof(long);
        }
        else if(str == arr[3])
        {
            return sizeof(float);
        }
        else if(str == arr[4])
        {
            return sizeof(double);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends