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
  int n; cin >> n;
  vii arr(n);
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    arr[i] = {a, b};
  }
  ii ans = {arr[0].first, arr[0].second};
  int pos = 0;
  for (int i = 0; i < arr.size(); i++) {
    auto& [l, r]  = arr[i];
    if (l <= ans.first && r >= ans.second) {
      ans = {l, r};
      pos = i + 1;
    }
  }
  for (auto& [l, r] : arr)
    if (l < ans.first || r > ans.second) { cout << -1; return 0; }
  cout << pos;

  return 0;
}
