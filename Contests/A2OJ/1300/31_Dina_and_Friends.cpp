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
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int v; cin >> v; sum += v;
  }
  
  int ans = 0;
  if ((sum + 1) % (n + 1) != 1) ans++;
  if ((sum + 2) % (n + 1) != 1) ans++;
  if ((sum + 3) % (n + 1) != 1) ans++;
  if ((sum + 4) % (n + 1) != 1) ans++;
  if ((sum + 5) % (n + 1) != 1) ans++;
  cout << ans << '\n';
  return 0;
}
