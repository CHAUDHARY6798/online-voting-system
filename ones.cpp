#include<iostream>
using namespace std;
int main()
{  int arr[]={0,0,0,1,1,1,1,0,0,0};

     int cnt=0;
    int maxi=0;
    int n;
    
   for(int i=0;i<n;i++)
   {
    if(arr[i]==1){
        cnt++;

    }
    else{
        cnt=0;

    }
    maxi=max(maxi,cnt);
   }
   return maxi;
};
    