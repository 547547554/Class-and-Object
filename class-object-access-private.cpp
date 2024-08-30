
#include <iostream>
using namespace std;
class student
{
    string name;
    int age, roll_no;

public:
    void setname(string n)
    {
        name = n;
    }
    void setage(int a)
    {
        age = a;
    }
    void setroll_no(int r)
    {
        roll_no = r;
    }
    void getname()
    {
        cout << name << endl;
    }
    void getage()
    {
        cout << age << endl;
    }
    void getroll_no()
    {
        cout<<roll_no<<endl;
    }
};
int main()
{
    student s1;
    s1.setname("rohit");
    s1.getname();
    s1.setage(18);
    s1.getage();
    s1.setroll_no(1);
    s1.getroll_no();
}