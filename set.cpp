#include<iostream>
using namespace std;
class set{
    int  m,n;
    public:
    void largest( void);
    void input( void);
    void display(void);

};
void set::largest(void)
{
    if(m>=n)
       int x=(m) ;
       
       else
       int y=(n);
}
void set::input(void){
 cout<<"enter value  of  m="<<"\n";
 cin>>m;
 cout<<"enter te values of n="<<"\n";
 cin>>n;
}
void set::display(void){
    cout<<"largest value="<<"\n";

}
 int  main(){
    set A;
    A.input();

    A.largest();
    A.display();


 }