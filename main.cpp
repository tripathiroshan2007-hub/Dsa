#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
bool isPrime=true;
 for(int i=2; i<=n-1;i++){
     if(n%i==0 && i!=n){
         isPrime=false;
         break;
     }
 }
   if (isPrime==true){
       cout<<"prime no\n";
   } else {
       cout<<"not prime\n";
   }


     
    cout<<endl;
    return 0;
}
// This program prints the first name and last name on separate lines.
