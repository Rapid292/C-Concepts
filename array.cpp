#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cout << "Length of array: ";
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cout << i << " th element of array: ";
      cin >> arr[i];
   }
   for (int j = n - 1; j >= 0; j--)
   {
      cout << arr[j] << " ";
   }

   return 0;
}
