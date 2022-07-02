// Nataraja Murthy
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	   sort(arr,arr+n);
    	   //1 2 3 5
    	int j,k,c=0;
    	for(int i=0;i<n-2;i++)
    	{
        j=i+1;
        k=j+1;
        while(k<n)
          {
            if(arr[i]+arr[j]==arr[k])
            {
                c++;
                j++;
                //k--;
            }
            else if(arr[i]+arr[j]<arr[k])
            {
                j++;
                k--;
            }
            k++; 
          }
    	}
    return c;
	}
};

int main() 
{
   	
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }
    return 0;
}  
