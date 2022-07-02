/*

Pascal's Triangle
5
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 

 */

import java.io.*;
import java.util.Scanner;
import java.util.Arrays;

class PascalTriangle {
	public static void main (String[] args) {
	System.out.println("Pascal's Triangle");
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	Integer[] a = new Integer[n+1];
	Arrays.fill(a,0);
	int spaces = n-1;
	for(int i=0;i<n;i++) {
	    int j=spaces--;
	    while(j!=0) {
	        System.out.print(" ");
	        j--;
	    }
	    if(i==0) {
	        a[0]=1;
	    } else {
	        int t=1;
	        Integer[] temp = new Integer[i+1];
	        temp[0]=t;
	        while(t!=i+1 && (a[t-1]+a[t])!=0) {
	          if(a[t]==0) {
	          	temp[t]=1;
	          } else {
	            temp[t] = a[t-1]+a[t];
	           }
	            t++;
	        }
	        for(int k=0;k<i+1;k++) {
	            a[k]=temp[k];
	         }
	    }
	    int k=0;
	    while(a[k]!=0) {
	        System.out.print(a[k] + " ");
	        k++;
	    }
	    System.out.println();
	}			
	}
}
