import java.io.*;
import java.util.*;
class LongestPalindrome
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String S = read.readLine();
            
            Solution ob = new Solution();
            System.out.println(ob.longestPalin(S));
        }
    }
}

class Solution{
    static String longestPalin(String S){
        // code here
        String str="",rstr="",lps="";
    int p=0,q=0;
    for(int i=0;i<S.length();i++)
    {
        str=str+S.charAt(i);
        rstr=S.charAt(i)+rstr;
        if(str.equals(rstr))
        {
            if(lps.length()<str.length())
            {
                lps=str;
            }
        }
        else
        {
            if(p!=0&&S.charAt(p-1)==S.charAt(i))
            {
                str=S.charAt(p-1)+str;
                rstr=rstr+S.charAt(p-1);
                if(lps.length()<str.length())
                {
                    lps=str;
                }
                p--;
            }
            else
            {
                i=++q;
                str="";
                rstr="";
                str=str+S.charAt(i);
                rstr=S.charAt(i)+rstr;
                p=i;
            }
        }
    }
    return lps;
    }
}
