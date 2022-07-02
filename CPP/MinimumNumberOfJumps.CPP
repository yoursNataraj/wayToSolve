#include<bits/stdc++.h>
using namespace std;

// Function to return minimum number
// of jumps to end of array

class Solution{
  public:
    int minJumps(int a[], int n){
        // Your code here
    if(a[0]==0)
    {
        if(n!=1) return -1;
        else return 0;
    }
    else if(a[0]>=n-1)
    {
        return 1;
    }
    else
    {
        int m = a[0];
        int i=0,jumps=1;
        while(m!=0)
        {
            if(i+m>=n-1)
            {
                return jumps;
            }
            else
            {
                int t = m;
                int max = 0,ele,k;
                while(t--)
                {
                    i++;
                    if(max<=i+a[i])
                    {
                        max=i+a[i];
                        ele=a[i];
                        k=i;
                    }
                }
                i=k;
                m=ele;
            }
            jumps++;
        }
        return -1;
    }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
