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
    ll y, x; cin >> y >> x;
    
    ll ans;
    if (x > y) {
      if (x & 1) ans = x * x - (y - 1);
      else ans = (x - 1) * (x - 1) + 1 + (y - 1);
    }
    else {
      if (y & 1) ans = (y - 1) * (y - 1)  + 1 + (x - 1);
      else ans = y * y - (x - 1);
    }
    cout << ans << '\n';
  }
  return 0;
}
