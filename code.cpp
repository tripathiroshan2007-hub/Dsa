#include<iostream>
#include<string>
using namespace std;

int factN(int n){
  int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int factR(int r){
  int fact=1;
    for(int i=1;i<=r;i++){
        fact*=i;
    }
    return fact;
}
int factNMR(int nMinusR){
  int fact=1;
    for(int i=1;i<=nMinusR;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int finalResult = factN(4)/(factR(2)*factNMR(4-2));
    cout<<"finalResult="<<finalResult<<endl;
    return 0;
}