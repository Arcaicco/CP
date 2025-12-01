#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;
 
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
 
int f(int n, int k, bool con = false) {
  if (n == 1) return 1;
  int e = (n + con) / 2;
  if (k <= e) 
    if (con) return 2 * k - 1;
    else return 2 * k;
  bool next_con = n & 1 ? 1 - con : con;
  if (con) return 2 * f(n - e, k - e, next_con);
  else return 2 * f(n - e, k - e, next_con) - 1;
}
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    cout << f(n, k) << '\n';
  }
  return 0;
}
