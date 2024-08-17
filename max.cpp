#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int arr[]={2,3,1,5,-3,0};
     long long sum=0,  max;
      int n ;
      for(int i=0;i<n;i++)
      {
         sum=sum +arr[i];
        if(sum>max)
        { max=sum;
         
        }
        if(sum<0)
        { 
            sum=0;

        }
      }
      return  max;


    
}
