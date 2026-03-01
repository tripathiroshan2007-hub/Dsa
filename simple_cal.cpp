#include<iostream>
#include<cmath>
using namespace std;

  int main(){
    int a,b;
    cin>>a>>b;

    int op;
    cin>>op;
    switch(op){
        case 1:{
        cout<<a+b<<endl;
        break;
    }   case 2:{
    cout<<a-b<<endl;
    break;
}   case 3:{
   cout<<a*b<<endl;
   break;
}  case 4:{
  cout<<a/b<<endl;
  break;
}  case 5:{
    cout<<pow(a,b)<<endl;
    break;
}
    }
    return 0;
    }

  