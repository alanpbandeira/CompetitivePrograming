// #include <iostream>
// #include <vector>
//
// using namespace std;
//
// //int cut_rod(int n, vector<int> p)
// int cut_rod(int n, int p[])
// {
//     // vector<int> r ((n+1), 0);
//     int r[n+1];
//     r[0] = 0;
//     // for (int k = 0; k <= n; r[k] = 0, k++);
//
//     for (int j = 1; j <= n; j++)
//     {
//         int q = -9999;
//
//         for (int i = 1; i <= j; i++)
//         {
//             q = max(q, (p[i] + r[j-i]));
//         }
//
//         r[j] = q;
//     }
//
//     return r[n];
// }
//
//
// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(nullptr);
//
//     int n, m_l, c_l, l_p;
//
//     cin >> n >> m_l;
//
//     int p[m_l+1];
//     for (int x = 0; x <= m_l; p[x] = 0, x++);
//     // vector<int> p ((m_l+1), -1);
//
//     for (int k = 0; k < n; k++)
//     {
//         cin >> c_l >> l_p;
//         p[c_l] = l_p;
//     }
//
//     cout << cut_rod(m_l, p) << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

struct st
{
  int len, cost;
};

int dp[3000][2000];

int cutrod(vector<st> &a, int t, int id) {
  if (id >= a.size()) return 0;
  if (t <= 0) return 0;
  if (dp[t][id] != -1) return dp[t][id];
  int best = cutrod(a, t, id + 1);
  if (t >= a[id].len)
    best = max(best, cutrod(a, t - a[id].len, id) + a[id].cost);
  return dp[t][id] = best;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int n, t;
  while (cin >> n >> t)
  {
    vector<st> a(n);
    for (auto &i : a) cin >> i.len >> i.cost;
    memset(dp, -1, sizeof dp);
    cout << cutrod(a, t, 0) << endl;
  }

  return 0;
}
