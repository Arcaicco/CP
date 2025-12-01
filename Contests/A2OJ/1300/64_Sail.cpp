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
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, x, y, ex, ey; cin >> n >> x >> y >> ex >> ey;
  multiset<int> mst;
  if (ex > x) 
    for (int i = 0; i < ex - x; i++) mst.insert('E');
  else 
    for (int i = 0; i < x - ex; i++) mst.insert('W');
  
  if (ey > y)
    for (int i = 0; i < ey - y; i++) mst.insert('N');
  else 
    for (int i = 0; i < y - ey; i++) mst.insert('S');
 
  string s; cin >> s;
  int ans = 0;
  for (char& c : s) {
    auto it = mst.find(c);
    if (it != mst.end()) mst.erase(it);
    ans++;
    if (mst.empty()) {
      cout << ans; return 0;
    }
  }
  cout << -1;
 
  return 0;
}
