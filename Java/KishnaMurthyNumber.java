// K - Krishna Murthy by N - Nataraja Murthy

/*
Enter Number: 145  
= 1! + 4! + 5! = 1 + 24 + 120  = 145  
Output: Krishna Murthy Number
*/
import java.io.*;
import java.util.Scanner;

class GFG {
	public static void main (String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter Number: ");
		int n=sc.nextInt();
		int m=n;
		int sum = 0;
		while(n!=0) {
		    sum+=factorial(n%10);
		    n/=10;
		}
		if(m==sum) {
		    System.out.println("Krishna Murthy Number.");
		} else {
		    System.out.println("Not a Krishna Murthy number.");
		}
	}
	public static int factorial(int n) {
	    if(n==1||n==0) {
	        return 1;
	    } else {
	        return n*factorial(n-1);
	    }
	}
}
