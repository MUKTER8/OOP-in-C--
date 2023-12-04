#include<iostream>
using namespace std;
class Student{
public:
      int id;
      double gpa;
      void display(){
            cout<<id<<"  "<<gpa<<endl;

      }
};
int main(){
Student Alim,Mukter;
Alim.id = 101;
Alim.gpa = 3.14;
Alim.display();

Mukter.id =388;
Mukter.gpa = 3.94;
Mukter.display();
}