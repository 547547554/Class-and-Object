#include <iostream>
using namespace std;

class student
{
    string name;

public:
    void setname(string a)
    {
        name = a;
    }
    void getname()
    {
        cout << name << endl;
    }
};
int main()
{
    student s1;
    s1.setname("rohit");
    s1.getname();
}
