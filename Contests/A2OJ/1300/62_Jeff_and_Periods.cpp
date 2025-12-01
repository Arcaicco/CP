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

struct Value {
  int start, end, pro, amount;
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  map<int, Value> mp;
  vi arr(n + 1);
  for (int i = 1; i <= n; i++) {
    int v; cin >> v;
    arr[i] = v;
    if (mp[v].start == 0) mp[v] = {i, i, 0, 1};
    else {
      mp[v].pro = i - mp[v].end;
      mp[v].end = i;
      mp[v].amount++;
    }
  }
  vii ans;
  for (auto& [v, value] : mp) {
    auto& [start, end, pro, amount] = value;
    if (amount == 1) { ans.emplace_back(v, 0); continue; }
    bool valid = true;
    for (int i = start; i <= end; i += pro) 
      if (v != arr[i])
        valid = false;
    if (valid && (end / pro - start / pro + 1) == amount) ans.emplace_back(v, pro);
  }

  cout << ans.size() << '\n';
  for (auto& [f, s] : ans) cout << f << ' ' << s << '\n';

  return 0;
}
