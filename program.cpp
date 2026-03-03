#include<iostream>
#include<cmath>
#include<string>
using namespace std;

  int main(){
    
    string name[20]={ "Rohit", "Suresh", "Amit", "Rahul", "Vijay", "Anil", "Sunil", "Pawan", "Karan", "Arjun",
                      "Ravi", "Sanjay", "Manish", "Ashish", "Nikhil", "Sandeep", "Prakash", "Deepak", "Ajay", "Gaurav"};
                      int rollNo[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
                      for(int i=0;i<20;i++){
                        if(rollNo[i]==10){
                          
                          break;
                        }
                        cout<<"Name:"<<name[i]<<endl;
                          cout<<"RollNo:"<<rollNo[i]<<endl;
                      }
      
     
      
    return 0;
    }

  
  