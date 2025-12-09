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

struct Val {
  int a, b, c; 
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int v; cin >> v; mp[v]++;
  }

  vector<Val> ans;
  while (mp[1] > 0 && mp[2] > 0 && mp[4] > 0) {
    mp[1]--, mp[2]--, mp[4]--;
    ans.push_back({1, 2, 4});
  }
  while (mp[1] > 0 && mp[2] > 0 && mp[6] > 0) {
    mp[1]--, mp[2]--, mp[6]--;
    ans.push_back({1, 2, 6});
  }
  while (mp[1] > 0 && mp[3] > 0 && mp[6] > 0) {
    mp[1]--, mp[3]--, mp[6]--;
    ans.push_back({1, 3, 6});
  }

  if (ans.size() != n / 3) cout << -1;
  else {
    for (auto& [a, b, c] : ans) cout << a << ' ' << b << ' ' << c << '\n';
  }

  return 0;
}
