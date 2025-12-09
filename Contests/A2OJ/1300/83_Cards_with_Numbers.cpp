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
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n; cin >> n;
  vii arr(n * 2);
  for (int i = 0; i < n * 2; i++) {
    int v; cin >> v;
    arr[i] = {v, i};
  }
  sort(arr.begin(), arr.end());
  vii ans;

  for (int i = 1; i < (int) arr.size(); i += 2) {
    auto& [a, ai] = arr[i - 1];
    auto& [b, bi] = arr[i];
    //cout << a << ' ' << b << '\n';
    if (a == b) ans.emplace_back(ai + 1, bi + 1);
  }

  if ((int) ans.size() == n) {
    for (auto& [a, b] : ans) cout << a << ' ' << b << '\n';
  }
  else cout << -1;


  return 0;
}
