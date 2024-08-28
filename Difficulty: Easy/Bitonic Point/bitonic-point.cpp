//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n)
	{
	    int low =1; int high = n-2;
	    if(n==1)
	    {
	        return arr[0];
	    }
	    if(arr[0] > arr[1])
	    {
	        return arr[0];
	    }
	    if(arr[n-1] > arr[n-2])
	    {
	        return arr[n-1];
	    }
	    
	    while(low <=high)
	    {
	        int mid = (low+high)/2;
	        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
	        {
	            return arr[mid];
	        }
	        else if(arr[mid] > arr[mid+1])
	        {
	            high = mid-1;
	        }
	        else
	        {
	            low = mid+1;
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends