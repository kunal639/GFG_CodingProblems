//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int larg = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>larg)
            {
                larg = arr[i];
            }
        }
        int hash[larg+1]={0};
        for(int j=0; j<n; j++)
        {
            if(arr[j]>=0)
                hash[arr[j]]++;
        }
        int x=1;
        for(; x<(larg+1); x++)
        {
            if(hash[x]==0)
            {
                return x;
            }
        }
        return x;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends