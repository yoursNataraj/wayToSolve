https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
https://youtu.be/eZhKtj5UZNc 

#include<iostream>
using namespace std;
int subArraySum(int *a,int n,int s)
{
    int sas=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(sas+a[i]<=s)
        {
            sas+=a[i];
        }
        else
        {
            sas+=a[i];
            while(sas>s)
            {
                sas-=a[c];
                c++;
            }
        }
        if(sas==s)
        {
            cout<<c+1<<" "<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    subArraySum(a,n,s);
	    cout<<endl;
	}
	return 0;
}
