#include<iostream>
using namespace std;

//It is a user defined data type 
//Blueprint for creating object

class student
{
    public:
    string name;
    int age,roll_no;
    string grade;

//Function Getter and setter

    void setname(string s)
    {
        name=s;
    }
    void setage(int a)
    {
        age=a;
    }
    void setroll_no(int r)
    {
        roll_no=r;
    }
    void setgrade(string g)
    {
        grade=g;
    }
    /// @brief 
    void getname(){
    cout<<"MY name is : "<<name<<endl;
    }

    void getage(){
    cout<<"My age is : "<<age<<endl;
    }

    void getroll_no(){
    cout<<"My roll NO is : "<<roll_no<<endl;
    }

     void getgrade(){
    cout<<"My Grad is : "<<grade<<endl;
    }
};

int main(){
    student s1;
    s1.name="rohit";
    s1.age=21;
    s1.roll_no=15;
    s1.grade="A++";
    s1.getname();
    s1.getage();
    s1.getroll_no();
    s1.getgrade();
    
}
