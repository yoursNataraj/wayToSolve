import java.io.*;
import java.util.*;
class SpirallyTraversingMatrix
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int r = sc.nextInt();
            int c = sc.nextInt();
            
            int matrix[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                 matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.spirallyTraverse(matrix, r, c);
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    }
}


class Solution
{
    //Function to return a list of integers denoting spiral traversal of matrix.
    ArrayList<Integer> ans = new ArrayList<Integer>();
    ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
         if(r==1 || c==1) {
           if(r==1 && c==1) {
               ans.add(matrix[r-1][c-1]);
               return ans;
           } else if(r==1) {
               for(int k=0;k<c;k++) {
                   ans.add(matrix[r-1][k]);
               }
               return ans;
           } else {
               for(int k=0;k<r;k++) {
                   ans.add(matrix[k][c-1]);
               }
               return ans;
           }
        } else {
            int i=0;
            for(int j=0;j<c;j++) {
                ans.add(matrix[i][j]);
            }
            i=c-1;
            for(int j=1;j<r;j++) {
                ans.add(matrix[j][i]);
            }
            i=r-1;
            for(int j=c-2;j>-1;j--) {
                ans.add(matrix[i][j]);
            }
            i=0;
            for(int j=r-2;j>0;j--) {
                ans.add(matrix[j][i]);
            }
            int tempMatrix[][] = new int[r-2][c-2];
            for(i=1;i<r-1;i++) {
                for(int j=1;j<c-1;j++) {
                    tempMatrix[i-1][j-1]=matrix[i][j];
                }
            }
            if(r > 2 && c > 2) {
                return spirallyTraverse(tempMatrix, r-2,c-2);
            } 
            return ans;
        }
    }
}

