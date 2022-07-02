#include<bits/stdc++.h>
using namespace std;

// Function to return Next larger elements


class Solution{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> st;
        vector<long long> v;
    for(int i=n-1;i>=0;i--)
    {
        while(st.empty()==false&&st.top()<arr[i])
        {
            st.pop();
        }
        long long t = arr[i];
        if(st.empty())
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(st.top());
        }
        st.push(t);
    }
    reverse(v.begin(),v.end());
    return v;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
