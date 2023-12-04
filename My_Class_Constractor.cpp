#include<iostream>
using namespace std;
class Student{
public:
      int id;
      double gpa;
      void display(){
            cout<<id<<"  "<<gpa<<endl;

      }
     Student(int x,double y){//Constructor function Don't write any data type function name is class name
     id = x;                  
     gpa = y;
     //There are no return type
     }
};
int main(){
Student Alim(101,3.14);

Alim.display();
Student Mukter(388,4.00);
Mukter.display();
}/*
Constructor is a spacial type of function that is used
to initilaze the obfect.
properties-
1.Constractor is a spacial type of function
2.Constractor has the same name as that of the class it belogs.
3.It has no return type not even void.
4.It is called automatically.
*/