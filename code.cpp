#include<iostream>
#include<string>
using namespace std;

int sumofDigits(int num){
    int digSum=0;
    while(num>0){
        int lastDigit=num%10;
        num/=10;
        digSum+=lastDigit;
    }
    return digSum;
}


int main(){
    cout<<"sum="<<sumofDigits(1234)<<endl;
   
    return 0;
}
    