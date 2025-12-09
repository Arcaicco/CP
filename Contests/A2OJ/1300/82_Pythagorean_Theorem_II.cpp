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
  int ans = 0;
  for (int i = 1; i <= n; i++) 
    for (int j = i; j <= n; j++) {
      int v = i * i + j * j;
      int val = round(sqrt(v));
      if (val * val == v && val <= n) ans++;
    }

  cout << ans;

  return 0;
}
