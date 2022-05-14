// Author: Nataraja Murthy
// Date: 14 May 2022 

import java.io.*;
import java.util.*;

class Diamond {

	public static void main(String args[]) {
	
	Scanner sc= new Scanner(System.in);
	System.out.print("Enter number: ");
	int n= sc.nextInt();
	int spaces = n-1;
	for(int i=1;i<=2*n-1;i++) {
	
	int j=spaces;
	while(j!=0) {
		System.out.print(" ");
		j--;
	}
	int digit = n-spaces;
	int c = 0;
	for(int k = 1; k <=2*(n-spaces)-1;k++) {

		System.out.print(digit);
		if(digit == 1 ) c = 1;
		if(c == 0) digit--;
		else digit++;
	}
	if(i < n) spaces--;
	else spaces++;
	System.out.println();
	}
}
}
