// https://practice.geeksforgeeks.org/problems/missing-number/0
// https://youtu.be/BfopH7hW_1U

#include<iostream>
using namespace std;

int main() {
	//number of test cases
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	    int n;
	    scanf("%d\n",&n);
	    int a[n-1],sum=0;
	    for(int i=0;i<n-1;i++)
	    {
	        scanf("%d\n",&a[i]);
	        sum+=a[i];
	    }
	    int sn=(n*(n+1))/2;
	    cout<<sn-sum<<endl;
	}
	return 0;
}
