#include<iostream>
#include<conio.h>
using namespace std;


class student {
   public:
       int id;
       double gpa;
       void disp(){
cout<<id<<endl;
cout<<gpa<<endl;}

};

int main(){

student taj;///class name and object



taj.id=1802038;
taj.gpa=3.66;
taj.disp();
//cout<<taj.id<<endl;
//cout<<taj.gpa<<endl;

student abir;
abir.id=1802037;
abir.gpa=3.44;
//cout<<abir.id<<endl;
//cout<<abir.gpa<<endl;
abir.disp();
getch();
}

