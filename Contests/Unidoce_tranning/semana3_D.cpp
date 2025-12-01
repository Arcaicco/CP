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
  vi arr(6);
  for (int& v : arr) cin >> v;
  int idx_mx = max_element(arr.begin(), arr.end()) - arr.begin();
  ll ans = arr[(idx_mx + 5) % 6] + arr[idx_mx] + arr[(idx_mx + 1) % 6];
  ans *= ans;
  ll a = arr[(idx_mx + 1) % 6];
  ll b = arr[(idx_mx + 3) % 6];
  ll c = arr[(idx_mx + 5) % 6];
  a *= a, b *= b, c *= c;
  ans = ans - a - b - c;
  cout << ans;
  
  return 0;
}
