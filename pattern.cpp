#include<iostream>
using namespace std;
int main() {
int n=4;

for(int i=0;i<n; i++){
    for(int j=0; j<i+1; j++){
        cout<<"* ";
    }
    

    if(i!=n){
        for(int k=0; k<2*(n-i)-2;k++){
            cout<<"  ";
        }
        
  
    for( int j=0; j<i+1; j++){
        cout<<"* ";
    }
    
    }
    cout<<endl;
    }
    int m=4;

for(int i=0;i<m; i++){
    for(int  j=m-i;j>0; j--){
        cout<<"* ";
    }
    

    if(i!=m){
        for(int k=2; k<2*(m/2+i)-2;k++){
            cout<<"  ";
        }
        
  
    for( int j=m-i; j>0; j--){
        cout<<"* ";
    }
    
    }
    cout<<endl;
    
   
   
}
return 0;
} 


