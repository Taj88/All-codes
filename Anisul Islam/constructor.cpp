#include<iostream>
#include<conio.h>
using namespace std;

class student{
   public:

int id;
double gpa;

void disp(){
cout<<id<<endl;
cout<<gpa<<endl;
}
student(int x,double y){
id=x;
gpa=y;

}
};
int main(){

student taj(12312,123.123);

taj.disp();



getch();
}
