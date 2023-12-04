#include<iostream>
using namespace std;
class Student{
public:
      int id;
      double gpa;
      void display(){
            cout<<id<<"  "<<gpa<<endl;

      }
      void setValue(int x,double y){
        id = x;
        gpa = y;
      }
};
int main(){
Student Alim,Mukter;
Alim.setValue(101,3.14);
Alim.display();
Mukter.setValue(388,4.00);
Mukter.display();
}