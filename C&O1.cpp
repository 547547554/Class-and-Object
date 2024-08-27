#include<iostream>
using namespace std;

// using class and object 

class student
{
    public:
    string name;
    int age, roll_no;
    string grade;
};

int main(){
    student s1;
    s1.name="rohit";
    s1.age=21;
    s1.roll_no=15;
    s1.grade="A++";
    cout<<s1.name<<endl;

    student s2;
    s2.name="rram";
    s2.age=21;
    s2.roll_no=15;
    s2.grade="A+";
    cout<<s2.grade<<endl;
}