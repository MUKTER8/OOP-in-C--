/*
Constractor-
1.Default-There is no parameter
2.Parametrizd-They have a parameter
*/
#include<iostream>
using namespace std;
class Student{
public:
      int id;
      double gpa;
      void display(){
            cout<<id<<"  "<<gpa<<endl;

      }
     Student(int x,double y){
     id = x;                  
     gpa = y;
    
     }
     Student(){
        cout<<"Default constractor\n";
     }
};
int main(){
    Student ob;
Student Alim(101,3.14);

Alim.display();
Student Mukter(388,4.00);
Mukter.display();
}