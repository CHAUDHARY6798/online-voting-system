#include<iostream>
using namespace std;
class circle {
       int radius;
       public :
       void  defineradius(int r)
       {
        radius=r;
       }
       void areacircle()
       {
          float area=3.14*radius* radius;
          cout<<  "area of circle ="<<area<< endl;

       }
         void  circumference()
         {
            float circumference=2*3.14*radius;
            cout<<"circumference of circle="<<circumference<<endl;
         }
    
};
 int main()
 {
    circle  c1;
    c1.defineradius(7);
    c1.areacircle();
    c1.circumference();
     

 }