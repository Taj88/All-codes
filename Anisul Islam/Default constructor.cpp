#include<iostream>
#include<conio.h>
using namespace std;

class student{
   public:
       int id;
       double gpa;
    void disp(int id,double gpa){


cout<<id<<endl;
cout<<gpa<<endl;//function

    }
   student(int id,double gpa){

   cout<<id<<endl;
   cout<<gpa<<endl;//constructor

   }

student(){
cout<<"default constructor"<<endl;
}


};
int main(){

student taj(12222,12.13);

taj.disp(123124,11.1111);
student tajjjjjj;///default constructor called here
getch();
}
