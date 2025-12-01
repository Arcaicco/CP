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
  vi E, O;
  for (int i = 0; i < n; i++) {
    int v; cin >> v;
    if (v & 1) O.push_back(v);
    else E.push_back(v);
  }
  sort(E.begin(), E.end());
  sort(O.begin(), O.end());
  reverse(E.begin(), E.end());
  reverse(O.begin(), O.end());
  ll ans = -1;
  if (E.size() > 1) ans = max(ans, 0ll + E[0] + E[1]);
  if (O.size() > 1) ans = max(ans, 0ll + O[0] + O[1]);
  cout << ans;
  return 0;
}
