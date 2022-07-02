import java.util.*;


class CircularTour
{
	public static void main(String args[])
	{
	Scanner sc = new Scanner(System.in);
	int t =sc.nextInt();
	while(t>0)
	{
		int n = sc.nextInt();
		sc.nextLine();
		String str = sc.nextLine();
		String arr[] = str.split(" ");
		int p[] = new int[n];
		int d[] = new int[n];
		int j=0;
		int k=0;
		for(int i=0; i<2*n; i++)
		{
			if(i%2 == 0)
			{
		p[j]= Integer.parseInt(arr[i]);
				j++;
			}
			else
			{
		d[k] = Integer.parseInt(arr[i]);
				k++;
			}
		}
			
System.out.println(new Solution().tour(p,d));
		t--;
	}
	}
}


// In java function tour() takes two arguments array of petrol
// and array of distance

class Solution
{
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(int petrol[], int distance[])
    {
	// Your code here
	int i=0,j=0,s=0, pet=0;
	int n = petrol.length;
        while(s!=n)
        {
		pet+=petrol[i];
      		if(pet-distance[i]>=0)
		{
          		pet-=distance[i];
          		j++;
      		}
      		else
      		{
         		if(s<i+1)
         		{
             			s=i+1;
             			j=0;
             			pet=0;
         		}
         		else
         		{
             			s=n;
         		}
      		}
      		i=(i+1)%n;
      		if(j==n)
      		{
          		return s;
      		}
   	}
   	return -1;
    }
}
