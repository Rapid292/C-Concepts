#include <iostream>

using namespace std;

int main()
{

   int x = 5;
   int *p;
   int **q;
   int ***r;
   p = &x;
   q = &p;
   r = &q;
   *p = x + 10;
   **q = x + 15;
   ***r = x + 20;

   cout << x << ", " << *p << ", " << **q << ", " << ***r << endl;
   cout << p << ", " << *q << ", " << **r << endl;
   cout << q << ", " << *r << ", " << &p << endl;
   cout << r << ", " << &q << endl;
   cout << "Rapid is Happy" << endl;

   return 0;
}