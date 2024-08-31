#include <iostream>
using namespace std;

class student
{
private:
  string name;
  int age, roll_no;
  string grade;

  // funtion getter and setter
public:
  void setname(string s)
  {
    if (s.size() == 0)
    {
      cout << "invalid name : ";
      return;
    }
    name = s;
  }
  void getname()
  {
    cout <<"My name is :  "<<name << endl;
  }


  void setage(int a)
  {
    if (age<0 && age>100)
    {
      cout<<"Invalid age : ";
      return;
    }
     age=a;
  }
 void getage()
  {
    cout<<"my age is : "<<age<<endl;
  }
 
 void setgrade( string g)
 {
  grade = g;
 }
 string get_grade(int pin)
 {
   if (pin == 22)
   return grade;
   return" ";
 
 }



};

int main()
{
  student s1;
  s1.setname("Rakesh");
  s1.getname();

  s1.setage(21);
  s1.getage();

  s1.setgrade("A++");
  cout<<"My grade is : "<<s1.get_grade(22)<<endl;

  
}