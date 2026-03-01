#include<iostream>
#include<string>
using namespace std;

class LibrarySystem{
    public:
    string bookTitle;
    string Author;
    
    int studentId;

    LibrarySystem( string bookTitle,string Author,int stdId){
        
        this-> bookTitle=bookTitle;
        this-> Author= Author;
        this-> studentId= stdId;
    }
    void printDetails(){
        cout<<"bookTitle:"<<bookTitle<<endl;
        cout<<"Author:"<<Author<<endl;
        cout<<"studentId:"<<studentId<<endl;
    }
    void setstudentId(int stdId){
        studentId=stdId;
    }
    int getstudentId(){
        return studentId;
    }
    
    };
    int main(){
        LibrarySystem LibBooks("Half Girlfriend","Chetan Bhagat",547);
      LibBooks. printDetails();
      LibBooks.setstudentId(547);

      
      return 0;
    }

