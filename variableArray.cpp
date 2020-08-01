#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif

   int n, q, len, m, p;
   cin >> n >> q;
   vector<vector<int>> bigOne;

   for (int i = 0; i < n; i++)
   {
      cin >> len;
      vector<int> innerOne;
      for (int j = 0; j < len; j++)
      {
         int e;
         cin >> e;
         innerOne.push_back(e);
      }
      bigOne.push_back(innerOne);
   }

   for (int k = 0; k < q; k++)
   {
      cin >> m >> p;
      cout << bigOne[m][p] << endl;
   }

   return 0;
}
