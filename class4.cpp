#include<iostream>
using namespace std;

// Private accece by the help of method

class Addition
{
 private:
   int a,b ;

  public:
   void getdata() //<---getdata() is method  
   {
    cout<<"\n Enter two numbers ";
    cin>>a>>b;
   }

   void putdata()  //<---putdata() is method
   {
    cout<<" \n Addition :  "<<a+b;
   }
};

int main()
{
Addition A1;
A1.getdata();
A1.putdata();

return 0;

}