// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0
// https://youtu.be/mfAmLCbLPIA

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    stack<char> st;
    int c=0;
    //reverse individual words
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            //back to starting position
            //of current word
            i=i-c;
            while(st.empty()==false)
            {
                s[i]=st.top();
                st.pop();
                i++;
            }
            c=0;
        }
        else
        {
            st.push(s[i]);
            c++;
        }
    }
    int i = s.length()-c;
    while(st.empty()==false)
    {
        s[i]=st.top();
        st.pop();
        i++;
    }
    //reverse entire string
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    i=0;
    while(st.empty()==false)
    {
        s[i]=st.top();
        st.pop();
        i++;
    }
    return s;
}
int main()
 {
    //Number of test cases
	int t;
	scanf("%d\n",&t);
	string s;
	while(t--)
	{
	    getline(cin, s);
	    cout<<reverseWords(s)<<endl;
	}
	return 0;
}
