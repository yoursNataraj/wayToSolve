#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        stack<char> st;
    int count=0;
    int a;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]!='.')
        {
            if(count==0)
            {
                a=i;
                count++;
            }
            st.push(S[i]);
        }
        else
        {
            i=a;
            while(st.empty()==false)
            {
                S[i]=st.top();
                st.pop();
                i++;
            }
            S[i]='.';
            count=0;
        }
    }
    while(st.empty()==false)
    {
        S[a]=st.top();
        st.pop();
        a++;
    }
    for(int i=0;i<S.length();i++)
    {
        st.push(S[i]);
    }
    a=0;
    while(st.empty()==false)
    {
        S[a]=st.top();
        st.pop();
        a++;
    }
    cout<<S;
    } 
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
