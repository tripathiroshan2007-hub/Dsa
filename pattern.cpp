#include<iostream>
using namespace std;
int main() {
int n=4;

for(int i=0;i<n; i++){
    // spaces
    for(int j=0; j<n-i-1;j++){
        cout<< "  ";
    }
    cout<<"* ";
    

    
    
   if(i!=0){
    // spaces
    for( int j=0; j<2*i-1; j++){
        cout<<"  ";
    }

    cout<<"*";
   }


cout<<endl;
}

int m=4;
for(int i=0;i<m-1; i++){
    // 
    for(int j=0;j<i+1;j++){
        cout<<"  ";
    }
    cout<<"* ";

      if(i!=m-2){
        // spaces
        for(int k=0;k<2*(m-i-2)-1;k++){
            cout<<"  ";
        }
        cout<<"*";
      }
      cout<<endl;
    
}

return 0;
}