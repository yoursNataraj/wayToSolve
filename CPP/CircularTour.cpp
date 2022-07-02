// https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1
// https://youtu.be/4FjT3YtwFOs 

#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
  int petrol;
  int distance;
};

int tour(petrolPump [],int );

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    petrolPump p[n];
    for(int i=0;i<n;i++)
      cin>>p[i].petrol>>p[i].distance;
    cout<<tour(p,n)<<endl;
  }
}

int tour(petrolPump p[],int n)
{
   int i=0,j=0,s=0;
   int pet=0;
   while(s!=n)
   {
      pet+=p[i].petrol;
      if(pet-p[i].distance>=0)
      {
          pet-=p[i].distance;
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

  
