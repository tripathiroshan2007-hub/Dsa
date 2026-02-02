#include<iostream>
using namespace std;
int main() {
int n=5;
int count=0;
for(int i=0;i<n+1; i++){

for(int j=0; j<i; j++){
cout<< count <<" ";
count+=1;
}

cout<<endl;
}
return 0;
}