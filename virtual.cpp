#include<iostream>
 using namespace std;
 class test
 {
    public:
     void display();
     {
        cout<<"\n display test ";

     }
      virtual  void show()
      {
        cout<<"\n show test";

      } 
};
 class  derived : public test 
 {
    public:
     void display()
     {
        "\n display derived";
     }
     void show ()
     {
        "\n show derived";

     }
      int main()
      {
        test  t;
         derived d;
         test * tptr;
         u
      }
 }
 