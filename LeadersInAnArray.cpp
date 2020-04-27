//https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
//https://youtu.be/LFpfw1tMnrg 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int leadersInArray(int n,int *a)
{
    stack<int> st;
    st.push(a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(st.top()<=a[i])
        {
            st.push(a[i]);
        }
    }
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    leadersInArray(n,a);
	    cout<<endl;
	}
	return 0;
}
