#include<iostream>
using namespace std;
int main(){
   int n=20;
   int sum=0;

   int i=1;
   while(i<=n){
    sum+=i;
    if(i==10){
        break;
    }

    i++; 
   }

     cout<<"sum="<<sum<<"\t";
    cout<<endl;
    return 0;
}
// This program prints the first name and last name on separate lines.
