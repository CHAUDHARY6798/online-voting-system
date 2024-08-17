#include<iostream>
using namespace std;
int main()
{
    int array[]={4,1,2,3,1};
     int targetsum=5;
      int size=5;
      for (int i=0;i<size;i++)
      {
        for(int j=i+1;j<size;j++)
        {  
            if(array[i]+array[j]==targetsum){
            return 1;
            }
        }
      } 
    
      return 0;
         
}       
