#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
   string name;
   int salary;

   Employee(string name, int salary, int sp)
   {
      this->name = name;
      this->salary = salary;
      this->secretPassword = sp;
   }

   void printDetails()
   {
      cout << "Name of Employee " << this->name << endl;
      cout << "salary of Employee " << this->salary << " Dollars" << endl;
   }

   void getSecretPassword()
   {
      cout << "The secret password of Employee is " << this->secretPassword << endl;
   }

private:
   int secretPassword;
};

class Programmer : public Employee
{
public:
   int errors;
};

int main()
{
   // string name = " Rishabh Gupta";
   // cout << "My name is " << name << endl;
   // cout << "My length of my name is " << name.length() << endl;
   // cout << "My name is " << name.substr(1) << endl;

   // int a = 29, b=34;
   // int *ptra, *pb;
   // pb = &b;
   // ptra = &a; // address of ...(&)
   // cout << ptra << endl;
   // cout << pb << endl;
   // cout << *ptra << endl; // value at (*)
   // cout << *pb; // value at (*)

   Employee har("Harry Con", 344, 738898328);
   Programmer Rishabh("Rishabh", 1000, 448553, )
       // har.name = "Harry";
       // har.salary = 100;
       har.printDetails();
   har.getSecretPassword();

   return 0;
}
