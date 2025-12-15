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
  int t; cin >> t;
  while (t--) {
    int a, b; cin >> a >> b;
    //if (a < b) { cout << -1 << '\n'; continue; }

    int k = 31 - __builtin_clz(a);

    ii ans = {0, 0};
    int v = 0;
    for (int i = 0; i <= k; i++)
      v = v | (1 << i);
    
    ans.first = a ^ v;
    ans.second = b ^ v;

    if (((a ^ ans.first) ^ ans.second) != b || a < ans.first || v < ans.second) { cout << -1 << '\n'; continue; }
    
    cout << 2 << '\n';
    cout << ans.first << ' ' << ans.second << '\n';
  }

  return 0;
}
