#include<stdio.h>
using namespace std;
int camelcase(string s) {
     int print =0;
    for(int i=0;i<n;i++)
    {
     if(a[i]==s.uppercase())
    {
       print ++;
        cout<<"print="<<print ;
    }
    
    } 
    

}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
