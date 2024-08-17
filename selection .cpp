
#include<iostream>
using namespace std;
void  display(int a[],int n)
{ for(int i=0;i<n;i++)
    
cout<<a[i]<<endl;
}
 void  selectionsort(int a[],int  n)
 {
   for( int i=0;i<n-2;i++)
 {
    int min=i;
    for(int j=i;j<n-1;j++)
    {
        if(a[j]<a[min])
        {
           min=j;

         }
    }  
    int  temp=a[min];
 a[min]=a[i];
 a[i=]=temp; 
 }  
 
}
 int  main()
  { int a[]={3,2,5,4,9};
  int n=5;
      selectionsort(a,n);
      display(a,n);


  }