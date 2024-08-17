#include<iostream>
using namespace std;
int  getmaxlength( int arr[],int n)
{
    int count=0;
    int result=0;
    for(int i=0;i<n; i++)
    {
        if(arr[i]==0){
        
        count=0;
        }
        else
        {  count++;
           result = max(result,count);
        
        }

    }
    return result;

}
 int main()
 {
     int arr[]={0,0,0,1,1,1,1,0,0,1,1};
     int n=11;
     int b=getmaxlength(arr,n);
     cout<<b<<endl;
     return 0;
 }