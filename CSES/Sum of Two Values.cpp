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
  int n, x; cin >> n >> x;
  /*
  map<int, int> mp;
  ii ans;
  for (int i = 0; i < n; i++) {
    int v; cin >> v;
    int f = x - v;
    if (mp.count(f)) 
      ans = {mp[f] + 1, i + 1};
    mp[v] = i;
  }
  if (ans == pair<int, int>{0, 0}) { cout << "IMPOSSIBLE"; return 0; }
  cout << ans.first << ' ' << ans.second;
  */
 
  vii arr;
  for (int i = 0; i < n; i++) {
    int v; cin >> v;
    arr.emplace_back(v, i + 1);
  }
  sort(arr.begin(), arr.end());
 
  int l = 0, r = n - 1;
  while (l < r) {
    int sum = arr[l].first + arr[r].first;
    if (sum == x) {
      cout << arr[l].second << ' ' << arr[r].second;
      return 0;
    }
    else if (sum > x) 
      r--;
    else if (sum < x) 
      l++;
  }
  cout << "IMPOSSIBLE";
 
  return 0;
}
