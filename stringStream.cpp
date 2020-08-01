#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
   stringstream ss;
   vector<int> v;
   int n;
   char skip;
   ss << str;
   while (ss)
   {
      if (ss.peek() != ',')
      {
         if (ss >> n)
         {
            v.push_back(n);
         }
      }
      else
      {
         ss >> skip;
      }
   }

   return v;
}

int main()
{
   string str;
   cin >> str;
   vector<int> integers = parseInts(str);
   for (int i = 0; i < integers.size(); i++)
   {
      cout << integers[i] << "\n";
   }

   return 0;
}
