#include <iostream>

using namespace std;

class CTestCase
{
public:
  //Constructor
  CTestCase()
  {
    cout<<"Constructor is called"<<endl;
  }
  //Destructor
  ~CTestCase()
  {
    cout<<"\nDestructor is called"<<endl;
   }
   //Member function
   void display(){
     cout<<"\n.....This is a Test Case!....."<<endl;
   }
};
int main(){
   //Object created
   CTestCase Test;
   Test.display();

   return 0;
}
