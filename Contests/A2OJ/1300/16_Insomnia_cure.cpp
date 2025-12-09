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
  int a, b, c, d, n; cin >> a >> b >> c >> d >> n;
  int ans = 0;
  vector<bool> arr(n, true);
  for (int i = a - 1; i < n; i += a) arr[i] = false;
  for (int i = b - 1; i < n; i += b) arr[i] = false;
  for (int i = c - 1; i < n; i += c) arr[i] = false;
  for (int i = d - 1; i < n; i += d) arr[i] = false;
  //for (const bool& v : arr) cout << v; cout << '\n';
  for (const bool& v : arr)
    if (!v) ans++;
  cout << ans;

  return 0;
}
