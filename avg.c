#include<stdio.h>
int main()
{
    float average ;
     int a,b,c  ;
    printf("enter first numbers:\n");
    scanf("%d",&a);
    printf("enter second numbers:\n");
    scanf("%d",&b);
    printf("enter  third numbers:\n");
    scanf("%d",&c);
      average= a+b+c/3;
    printf("average :%d",average);
      return 0;
}